// Get the registration form element by its ID and add an event listener for the 'submit' event
document.getElementById('registrationForm').addEventListener('submit', async function(event) {
    // Prevent the default form submission behavior
    event.preventDefault();
    
    // Create an object to hold the form data
    const formData = {
        name: document.getElementById('name').value, // Get the value of the 'name' input field
        email: document.getElementById('email').value, // Get the value of the 'email' input field
        password: document.getElementById('password').value, // Get the value of the 'password' input field
        age: document.getElementById('age').value, // Get the value of the 'age' input field
        city: document.getElementById('city').value, // Get the value of the 'city' input field
        pincode: document.getElementById('pincode').value, // Get the value of the 'pincode' input field
        phone: document.getElementById('phone').value // Get the value of the 'phone' input field
    };

    // Send a POST request to the server with the form data
    const response = await fetch('http://localhost:3000/register', {
        method: 'POST', // Use the POST method
        headers: {
            'Content-Type': 'application/json' // Set the content type to JSON
        },
        body: JSON.stringify(formData) // Convert the form data object to a JSON string
    });

    // Check if the response from the server is OK (status code 200-299)
    if (response.ok) {
        alert('Registration successful!'); // Show a success message
        document.getElementById('errorMessage').style.display = 'none'; // Hide any previous error messages
        document.getElementById('successMessage').style.display = 'block'; // Show the success message
    }
});