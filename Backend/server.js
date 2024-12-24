const express = require('express');
const bodyParser = require('body-parser');
const fs = require('fs');
const path = require('path');
const app = express();
const port = 3000;

app.use(bodyParser.json());

// Serve static files
app.use(express.static(path.join(__dirname)));

// Serve index.html at the root
app.get('/', (req, res) => {
    const filePath = path.join(__dirname, 'index.html');
    console.log(`Serving file: ${filePath}`);
    res.sendFile(filePath, (err) => {
        if (err) {
            console.error('Error serving index.html:', err);
            res.status(500).send('Server error');
        }
    });
});

app.post('/register', (req, res) => {
    const { name, email, password } = req.body;
    const user = { name, email, password };

    // Read existing data
    fs.readFile('users.json', (err, data) => {
        if (err && err.code !== 'ENOENT') {
            console.error('Error reading file:', err);
            return res.status(500).send('Server error');
        }

        const users = data ? JSON.parse(data) : [];
        users.push(user);

        // Write updated data
        fs.writeFile('users.json', JSON.stringify(users, null, 2), (err) => {
            if (err) {
                console.error('Error writing file:', err);
                return res.status(500).send('Server error');
            }
            res.status(200).send('Registration successful');
        });
    });
});

app.get('/users', (req, res) => {
    fs.readFile('users.json', (err, data) => {
        if (err && err.code !== 'ENOENT') {
            console.error('Error reading file:', err);
            return res.status(500).send('Server error');
        }

        const users = data ? JSON.parse(data) : [];
        const usersWithPasswords = users.map(user => ({
            name: user.name,
            email: user.email,
            password: user.password // Add this line
        }));
        res.status(200).json(usersWithPasswords);
    });
});

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}/`);
});