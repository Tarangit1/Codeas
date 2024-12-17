const express = require('express');
const app = express();
const port = 3000;

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});
app.get('/change-html', (req, res) => {
  res.send(`
    <html>
      <head>
        <title>Changed HTML</title>
      </head>
      <body>
        <h1>This is the new HTML content</h1>
      </body>
    </html>
  `);
});

app.listen(port, () => {
  console.log(`Server is running at http://localhost:${port}`);
});