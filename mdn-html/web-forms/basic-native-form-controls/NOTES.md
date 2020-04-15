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

Remember, for maximum usability/accessibility, you are advised to surround each list of related items in a <fieldset> with a <legend> providing an overall description of the list.
  Each individual pair of <label>/<input> elements should be contained in its own <li> or something similar.
  The associated <label> is generally placed immediately after the radio button or checkbox, with the instructions for the group of radio buttons or checkboxes generally being the content of the <legend>

--- CHECK BOX ---
A checkbox is created using the <input> element with a `type` attribute set to the value of `checkbox`

Including the `checked` attribute makes the checkbox checked automatically when the page loads

Due to the on-off nature of checkboxes, many developers and designers have expanded on the default checkbox styling to create buttons that look like toggle switches

--- RADIO BUTTON ---
A radio button is created using the <input> element with a `type` attribute set to the value of `radio`

Several radio buttons can be tied together. If they share the same value for thier `name` attribute, they will be considered to be in the same group of buttons.
  Only one button in a given group may be checked then at a time; this means that when one of them is checked all the others automatically get unchecked.
  When the form is sent, only the value of the checked radio button is sent.
  If none are checked upon submission, the whole pool of radio buttons is considered to be in an unknown state and no value is sent with the form

## Actual Buttons ##
There are three input types that produce buttons:
  `submit` - send the form data to the server, For <button> elements, omitting the `type` attribute also results in a submit button
  `reset` - resets all form widgets to their default values
  `button` - buttons that have no automatic effect but can be customized later using JavaScript

In addition, the <button> element can take a `type` attribute to mimic these three input types.
  The main difference between the two is that actual <button> elements are much more stylable
  Typically you'll want to use buttons over inputs for that reason

--- IMAGE BUTTONS ---
The image button control is rendered exactly like an <img> element, except that when the user clicks it, it behaves like a submit button.

An image button is created using an <input> element with its `type` attribute set to the value `image`
  This element supports exactly the same set of attributes as the <img> element, plus all the attributes supported by other form buttons

If the image button is used to submit the form, it doesn't submit its value -- instead, the X and Y coordinates of the click on the image are submitted.
  This is very convenient if you're trying to build a hot map. We'll talk more about this is an article titled Sending form data

## File Picker ##
Forms are able to send files to a server. The file picker widget can be used to choose one or more files to send.

To create a file picker widget, you use the <input> element with its `type` attribute set to `file`.
  The types of files that are accepted can be constrained using the `accept` attribute.
  In addition, if you want to let the user pick more than one file, you can do so by adding the `multiple ` attribute

## Common attributes ##
Many elements used to define form controls have some of their own specific attributes

However, there is a set of attributes common to all form elements:
  `autofocus` - this boolean attribute lets you specify that the element should automatically have input focus when the page loads. Only one form-associated element in a document can have this attribute specified
  `disabled` - this attr indicates that the user cannot interact with the element. If this attr is not specified, the element inherits its setting from the containing element, for example, <fieldset>;
  `form` - the <form> element that the widget is associated with, used if it is not nested within that form. The value of the attribute must be the `id` attribute of the <form> element. This lets you associate a form control with a form it is outside of
  `name` - the name of the element; this is submitted with the form data
  `value` - the element's initial value