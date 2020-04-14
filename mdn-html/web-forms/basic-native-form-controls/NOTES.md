# Basic Native Form Controls #
 
## Text input fields ##
* Note that HTML form text fields are simple plain text input controls, meaning you cannot use them to perform rich editing (bold, italic, etc.).

All basic text controls share some common behaviors:
  They can be marked as `readonly` (cannot modify input value, but it is still sent with the rest of the form data) or `disabled` (the input value can't be modified and is never sent with the rest of the form data).
  They can have a `placeholder`
  They can be constrained in `size` (the physical size of the box) and `maxlength` (the maxium num of characters that can be entered into the box).
  They can benefit from spell checking (using the `spellcheck` attribute), if the browser supports it.

--- SINGLE LINE TEXT FIELDS ---
These are those <inpute> elements whose type attribute is `text` or is simply omitted (default type for input elements is text)

Single line text fields have only one true constraint:
  If you type text with line breaks, the browser removes those line breaks before sending the data to the server
  
One of the original input types was the password text field type
  Doesn't add any constraints, but it obscures the value entered into the field so it's not easily read by others
  This is simply UI related however and if you don't send your form data over https it will be sent in plaintext

--- HIDDEN CONTENT ---
Another original text control is the `hidden` input type.
  This is used to create a form control that is invisible to the user, but is still sent to the server along with the rest of the form data once submitted
  Prime example of this is if you want to send a timestamp to the server stating when an order was placed. because it's hidden, the user cannot see nor intentionally edit the value, it will never receive focus, and a screen reader will not notice it either. 
  The `hidden` input types should not have labels associated with them

## Checkable items: checkboxes and radio buttons ##
Two kinds:
  checkbox and radio button
  Both use `checked` attribute to indicate whether the widget is checked by default or not

It's worth noting that these widgets don't behave exactly like other form widgets. For mosst form widgets, once the form is submitted all widgets that have a `name` attribute are sent, even if no value has been filled out. 

In the case of checkable items, their values are sent only if they are checked. If they are not checked, nothing is sent, not even their `name`

If they are checked but have no value, the `name` is sent with a value of `on`

