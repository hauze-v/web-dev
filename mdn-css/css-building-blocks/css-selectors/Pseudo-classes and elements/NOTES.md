# Pseudo-classes and pseudo-elements #
There are a large number of these, and they often serve quite specific purposes. Once you know how to use them, you can look at the list to see if there is something which works for the task you're trying to achieve.

## What is a pseudo-class? ##
A selector that selects elements that are in a specific state, e.g. they are the first element of their type, or they are being hovered over by the mouse pointer. They tend to act as if you had applied a class to some part of your document, often helping youcut down on excess classes in your markup, and giving you a more flexible, maintainable code.

Pseudo-classes are keywords that start with a colon: 

`:pseudo-class-name`

--- SIMPLE PSEUDO-CLASS EXAMPLE ---
If we wanted to make the first paragraph in an article larger and bold, we could add a class to that paragraph and then add CSS to that class as shown in the html.

However, this could be annoying to maintain - what if a new paragraph got added to the top of the document? We'd need to move the class over to the new paragraph. Instead of adding the class, we could us the `:first-child` pseudo-class selector - this will *always* target the first child elemet in the article, and we will no longer need to edit the HTML

All pseudo-classes act the same way. They target some bit of your document that's in a certain state, behaving as if you had added a class into your HTML. Here are some other examples:

`:last-child`
`:only-child`
`:invalid`

--- USER-ACTION PSEUDO CLASSES ---
Some pseudo-classes only apply when the user interacts with the document in some way. These **user-action** pseudo classes, sometimes referred to as **dynamic pseudo-classes**, act as if a class had been added to the element when the user interacts with it. Examples include:

`:hover` - mentioned earlier, this only applies if the user moves their pointer over an element, typically a link.
`:focus` - only applies if the user focuses the element using keyboard controls


## What is a pseudo-element? ##
These behave in a similar way, however they act as if you had added a whole new HTML element into the markup, rather than applying a class to existing elements. Pseduo-elements begin with a double colon `::`

`::pseudo-element-name`

**Note**: Some early pseudo-elements used the single colon syntax, so you may sometimes see this in code or examples.

For example, if you wanted to select the first line of a paragraph you could wrap it in a <span> element and use an element selector; however, that would fail if the number of words you had wrapped were longer or shorter than the parent element's width. As we tend no to now how many words will fit on a line - as that will change if the screen width or font-size changes - it is impossible to robustly do this by adding HTML.

The `::first-line` psuedo-element selector will do this for you reliably - if the number of words increases and decreases it will still only select the first line.

It acts as if a <span> was magically wrapped around that first formatted line, and updated each time the ling length changed.

## Combining pseudo-classes and pseudo-elements ##
If you wanted to make the first line of the first paragraph bold you could chain the `:first-child` and `::first-line` selectors together. In the html example, we are saying that we want to select the first line, of the first <p> element, which is inside an <article> element.

## Generating content with ::before and ::after ##
There are a couple of special pseudo-elements, which are used along with the `content` property to insert content into your document using CSS.

You could use these to insert a string of text, such as in the html example. Try changing the text value of the `content` property and see it change in the output. You could also change the `::before` pseudo-element to `::after` and see the text inserted at the end of the element instead of the beginning.

Inserting strings of text from CSS isn't really something we do very often on the web, however as that text is inaccessible to some screen readers and might be hard for someone to find and edit in the future.

A more valid use of these pseudo-elements is to insert an icon, for example a little arrow added in our html example, which is a visual indicator that we wouldn't want read out by a screenreader anyway.

These pseudo-elements are also frequently used to insert an empty string, which can then be styled just like any element on the page.

In our HTML example, we have added an empty string using the `::before` pseudo-element. We have set this to `display: block` in order that we style it with a width and height. We then use CSS to style it just like any element. You can play around with the CSS and change how it looks and behaves.

The use of the `::before` and `::after` pseudo-elements along with the `content` property is referred to as "Generated Content" in CSS, and you will often see this technique being used for various tasks. A great example is the cite CSS Arrow Please, which helps you to generate an arrow with CSS. Look at the CSS as you create your arrow and you will see the `::before` and `::after` pseudo-elements in use. Whenever you see these selectors, look at the `content` property to see what is being added to the HTML document via CSS.

