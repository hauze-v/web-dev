# Type, Class, and ID Selectors #

## Type Selectors ##
A **type selector** is sometimes referred to as a *tag name selector* or *element selector*, because it selects an HTML tagelement in your document. In the example below we have used the span, em, and strong selectors. All instances of <span>, <em>, and <strong> elements are therefore styled accordingly.

## The Universal Selector ##
The universal selector is indicated by an asterisk (*) and selects everything in the document (or inside the parent element if it is being chained together with another element and a descendant combinator).

Using the universal selector to whipe out default styling can sometimes be seen in "reset stylesheets," which strip out all of the browser styling. Since the universal selector makes global changes, we use it to deal with very specific situations such as the one outline below:

--- USING THE UNIVERSAL SELECTOR TO MAKE YOUR SELECTORS EASIER TO READ ---
One use of the univseral selector is to make selectors easier to read and more obvious in terms of what they're doing. For example, if I wanted to select the first child of any <article> element, no matter what element it was, and make it bold, I could use the `:first-child` selector as a descendant selector along with the <article> element selector:

article :first-child {

}

This could be confused however with `article:first-child`, which will select any <article> element that is the first child of another element.

To avoid this confusion we can add the universal selector to the `:first-child` selector, so it's obvious what the selector is doing. It's selecting *any* element which is the first-child of an <article> element.

article *:first-child {

}

## Class Selectors ##

--- TARGETING CLASSES ON PARTICULAR ELEMENTS ---
You can create a selector that will target specific elements with the class applied. In this next example, we highlight a <span> with a class of `highlight` differently to an <h1> heading with a class of `highlight`. We do this by using the type selector for the element we want to target, with the class appended using a dot, with no white space inbetween.

This approach reduces the scope of a rule as the rule will only apply to that particular element & class combination; so you would need to add another selector if you decided the rule should apply to other elements too.

--- TARGET AN ELEMENT IF IT HAS MORE THAN ONE CLASS APPLIED ---
You can apply multiple classes to an element and target them individually, or only select the element when all of the classes in the selector are present. This can be helpful when building up components that can be combined in different ways on your site.

In our example, we have a <div> that contains a note. The grey border is applied when the box has a class of `notebox`. If it also has a class of `warning` or `danger`, we change the `border-color`.

We can tell the browser that we only want to match the element if it has all of these classes by chaining them together with no white space between them.