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

## Phone number field ##
A special field for entering phone numbers can be created using `tel` for the input type
  When accessed via a touch device with a dynamic keyboard, most devices will display a numeric keypad when `type="tel"` is encountered
  This means this type is useful whenever a keypad might be useful, and not necessarily just for telephone numbers

Due to the wide variety of phone number formats around the world, this type of field does not enforce any constraints on the value entered by a user. 

As we mentioned earlier, the `pattern` attribute can be used to enforce constraints, which you'll learn more about in Client-side form validation article

## URL field ##
A special type of field for entering URLs can be created using the value `url` for the `type` attribute
  It adds special validation constraints to the field
  The browser will report an error if no protocol (such as http:) is entered, or if the URL is otherwise malformed.

On devices with dynamic keyboards, the default keyboard will often display some or all of the colon, perido, and forward slash as default keys

## Numeric Field ##
Controls for entereing numbers can be created with an <input> element with `type` number. 
  This control looks like a text field but allows only floating-point numbers, and usually provides buttons in the form of a spinner to increase and decrease the value of the control
  You can constrain the minimum and maximum values allowed by setting the `min` and `max` attributes
  You can also use the `step` attribute to set the increment increase and decrease caused by pressing the spinner buttons

By default, the number input type only validates if the number is an integer.
  To allow float numbers, specify `step="any"`

The number input type is great for when you'd like to limit the values so let's say for something like weight, height, age, etc. If you have something with a much greater range, or you don't know the range, then the `tel` input type would be better suited which forgoes the number spinner button.

## Slider Controls ##
Another way to pick a number is to use a "slider". 
  You see these quite often on sites like housebuying sites where you want to set a maximum property price to filter by.

Usage wise, sliders are less accurate than text fields and are therefore used when precision isn't as important

A slider is created using the <input> with its type attr set to the value of `range`.

It's important to properly configure your slider
  It's highly recommended that you set the `min`, `max`, and `step` attributes

One problem with sliders is that they don't offer any kind of visual feedback as to what the current value is.
  That's why they're commonly used along with the <output> element which can be associated to the slider using the `for` attr and can display the current value

## Date and Time Pickers ##
A date and time control is created using the <input> element and an appropriate value for the `type` attribute, depending on whether you wish to collect dates, times, or both.

Let's look at the different available types in brief. Note that the usage of these types is quite complex, especially when considering browser support.

--- DATETIME-LOCAL ---
This type creates a widget to display and pick a date with time with no specific time zone information

--- MONTH ---
Creates a widget to display and pick a month with a year

--- TIME ---
Creates a widget to display and pick a time value. While time may display in 12-hour format, the value returned is in 24-hour format.

--- WEEK ---
Creates a widget to display and pick a week number and its year.

Weeks start on Monday and run to Sunday. Additionally, the first week 1 of each year contains the first Thursday of that year - which may not include the first day of the year, or may include the last fewe days of the previous year.

--- CONSTRAINING DATE/TIME VALUES ---
All date and time controls can be constrained using the `min` and `max` attributes, with further constraining possible via the `step` attribute
  Step used with date will skip that many days of the week, so for example, `step="7"` would mean ONLY Saturdays if you placed the `min` (starting day) on a Saturday.

--- BROWSER SUPPORT FOR DATE/TIME INPUTS --- 
Date and time widgets don't have the best browser support
  Chrome, Edge, and Opera suppor them well, but there is no support in Internet Explorer, Safari and Firefox only supports `time` and `date` only

Another option is to consider using a JavaScript library to provide a date picker

Most modern frameworks have good components available to provide this functionality, and there are standalone libraries available too.