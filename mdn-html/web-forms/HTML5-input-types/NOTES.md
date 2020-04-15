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

## Search Field ##
Search fields are intended to be used to create search boxes on pages and apps. This type of field is set by using the value `search` for the `typer` attribute:
  The main difference between a `text` field and a `search` field is how the browser styles its appearance.
  `search` fields are rendered with rounder corners and sometimes display an X, which clears the field of any value when clicked.
  Additionally, on devices with dynamic keyboards, the keyboards enter key may read `search`, or display a magnifying glass icon. 

Another feature worth noting is that the values of a search field can be automatically saved and re-used to offer auto-completion across multiple pages of the same website. 
  This tends to happen automatically in most modern browsers