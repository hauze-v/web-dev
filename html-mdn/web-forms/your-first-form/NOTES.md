# Your First Form #
A web form's HTML is made up of one or more `form controls` (sometimes called `widgets`), plus some additional elements to help structure the overall form - they are often referred to as `HTML forms`
  The controls (or widgets) can be single or multi-line text fields, dropdown boxes, buttons, checkboxes, or radio buttons, and are mostly created using the <input> element, although there are some other elements to learn about too. 

These form controls (or widgets) can also be programmed to enforce specific formats or values to be entered (otherwise known as `form validation`), and paired with text labels that describe their purpose to both sighted and blind users.

Start with the <form> element which defines a form. It's a container element like a <section> or <footer> element, but specifically for containing forms; it also supports some specific attributes to configure the way the form behaves. 
  All of the attributes are optional, but it's standard practice to always set at least the `action` and `method` attributes

The `action` attribute defines the location (URL) where the form's collected data should be sent when it is submitted. 

The `method` attribute defines which HTTP method to send the data with (usually get or post)

It's standard practice to use <ul> elements with your forms to conveniently structure your code and make styling easier. 

Additionally, always include an explicit label for each form control.
  Note the use of the `for` attribute on all <label> elements, which takes as its value the `id` of the form control with which it is associated -- this is how you associate a form control with its label.

On the <input> element, the most important attribute is the `type` attribute. This attribute is extremely important because it defines the way <input> elements appear and behave.
  The `name` attribute is submitted along with the form data as a key/value pair

You can use the `value` attribute to place some default text in each input, or better yet, use the `placeholder` attribute to place slightly opacitated text.

Lastly, you may use the <button> element which accepts the following values for its' `type` attribute:
  1. submit - this sends the form's data to the web page defined by the `action` attribute of the <form> element
  2. reset - this resets all the form widgets to their default value immediately. From a UX perspective, this is considered bad practice
  3. button - This does... NOTHING! This may sound silly, but it's amazingly useful for building custom buttons - you can define their chosen functionality with JavaScript