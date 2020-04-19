# Cascade and Inheritance #
Teh aim of this lesson is to develop your understanding of some of the most fundamental concepts of CSS - the cascade, specificity, and inheritance - which control how CSS is applied to HTML and how conflicts are resolved.

Understanding these fundamentals will save you a lot of pain later on! Ensure you know these concepts well before moving on.

## Conflicting Rules ##
CSS stands for **Cascading Style Sheets**, and that first word *cascading* is incredibly important to understand - the way that the cascade behaves is key to understanding CSS.

At some point, you will be working on a project and you'll find that the CSS you thought would be applied to an element is not working. Usually the problem is that you have created two rules which could potentially apply to the same element. The **cascade**, and the closely-rleated concept of **specificity**, are mechanisms that control which rule applies when there is such a conflict.

Also significant here is the concept of **iheritance**, which means that some CSS properties by default inherit values set on the current element's parent element, and some don't. This can obviously cause some behavior that's not expected.

Let's start by taking a quick look at the key things we're dealing with. It can seem tricky at first, but with more practice writing CSS, the way it works will become more obvious to you.

--- THE CASCADE ---
Stysheets **cascade** - at a very simply level this means that the order of CSS rules matter; when two rules apply that have equal specificity the one that comes ast in the CSS ruleset is the one that will be used.

--- SPECIFICTY ---
Decides which rule applies if multiple rules have different selectors, but could still apply to the same element.
  An element selector is less specific - it will select all elements of that type that appear on a page - so will get a lower score.
  A class selector is more specific - it will select only the elements on a page that have a specific `class` attribute value - so will get a higher score.

--- INHERITANCE ---
Inheritance also needs to be understood in this context - some CSS property values set on parent elements are inherited by their child elements, and some aren't.

For example, if you set a `color` and `font-family` on an element, every element inside it will also be styled with that color and font, unless you've applied diferent color and font values directly to them.

Some properties do not inherit - for example if you set a `width` of 50% on an element, all of its descendants do not get a width of 50% of their parent's width. If this was the case, CSS would be very frustrating to use.

**Note** On MDN CSS property reference pages, you can usually see a list of data points about that property, including whether it is inheritied or not.

## Understanding inheritance ##
Let's start with inheritance, in the example in index.html, we have a <ul>, with two levels of unordered lists nested inside it. We have given the outer <ul> a broder, padding, and font color.

The color haas applied to the direct children, but also the indirect children - the immediate child <li>s, and those inside the first nested list.

We then add a class of `special` to the second nested list and applied a different color to it. This then inherits down through its children.

THings like widths, margins, padding, and borders do not inherit. If a border were to be inherited by the children of our list, every single list and list item would gain a border - probably not an effect we would ever want!

Which CSS properties are inherited by default and which aren't is largely down to common sense.

--- CONTROLLING INHERITANCE ---
CSS provides four special universal property values for controlling inheritance. Every CSS property accepts these values.

`inherit`
  Sets the property value applied to a selected element to be the same as that of its parent element. Effectively, this "turns on inheritance".

`initial`
  Sets the property value applied to a selected element to be the same as the value set for that property on that element in the browser's default style sheet.
  If no value is set by the browser's default style sheet and the property is naturally inherited, then the property value is set to `inherit` instead.
  Essentially says "set this to the default browser styling, if there is any, or inherit.

`unset`
  Resets the property to its natural value, which means that if the property is naturally inheritied it acts like `inherit`, otherwise it acts like `initial`.
  In otherwords, it *resets a property to its inherited value if it inherits from its parent, and to its initial value if not.*

`revert`
  Newer value, which has limited browser support currently

We can look at list of links and explore how the universal values work.

For example:
  1. The second list item has the class `my-class-1` applied. This sets the color of the <a> element nested inside to inherit. If you remove the rule how does it change the color of the link?
  2. Do you understand why the third and fourth links are the color that they are? Check for description of the values above if not.
  3. Which of the links will change color if you define a new color for the <a> element - for example a {color: red;}?

--- RESETTING ALL PROPERTY VALUES ---
The CSS shorthand property `all` can be used to apply one of these inheritance values to (almost) all properties at once. It's value can be any one of the inheritance values (`inherit`, `initial`, `unset`, or `revert`). It's a convenient way to undo changes made to styles so that you can get back to a known starting point before beginning new changes. 



