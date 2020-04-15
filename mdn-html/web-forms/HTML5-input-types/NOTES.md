# HTML5 Input Types #

## E-mail address field ##
This type of field is set using the value `email` for the `type` attribute
  When this type is used, the user is required to type a valid email address into the field. 
  You can also use the `multiple` attribute in combination with the `email` input type to allow several email addresses to be entered in the same input

--- CLIENT-SIDE VALIDATOIN ---
As you can see above, email, along with other newer input types, provides built-in "client-side" error validation - performed by the browser before the data gets sent to the server.
  However, it should not be considered an exhautive security measure!
  Your apps should always perform security checks on any form-submitted data on the "server-side" as well as the client-side, because client-side validation is too easy to turn off, so malicious users can still easily send bad data through to your server.

In order to implement different validation behavior, you can use the `pattern` attribute, and you can also custom the error messages; we'll talk how to use these features in the Client-side form validation article later on
