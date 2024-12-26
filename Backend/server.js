const express = require('express');
const bodyParser = require('body-parser');
const fs = require('fs');
const path = require('path');
const cors = require('cors');

const app = express();
const port = 3000;

app.use(cors());
app.use(bodyParser.json());

// Serve static files
app.use(express.static(path.join(__dirname)));

// Serve index.html at the root
app.get('/', (req, res) => {
    const filePath = path.join(__dirname, 'index.html');
    console.log(`Serving file: ${filePath}`);
    res.sendFile(filePath);
});

app.post('/register', (req, res) => {
    const { name, email, password, age, city, pincode, phone } = req.body;
    const user = { name, email, password, age, city, pincode, phone };

    // Read existing data
    fs.readFile('users.json', (err, data) => {
        const users = data ? JSON.parse(data) : [];
        users.push(user);

        // Write updated data
        fs.writeFile('users.json', JSON.stringify(users, null, 2), () => {
            res.status(200).send('Registration successful');
        });
    });
});

app.get('/users', (req, res) => {
    fs.readFile('users.json', (err, data) => {
        const users = data ? JSON.parse(data) : [];
        const usersWithDetails = users.map(user => ({
            name: user.name,
            email: user.email,
            password: user.password,
            age: user.age,
            city: user.city,
            pincode: user.pincode,
            phone: user.phone
        }));
        res.status(200).json(usersWithDetails);
    });
});

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}/`);
});
