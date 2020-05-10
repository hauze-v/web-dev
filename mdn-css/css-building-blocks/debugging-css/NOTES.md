# Debugging CSS #
Sometimes when writing CSS you will encounter an issue where your CSS doesn't seem to be doing what you expect. Perhaps you believe that a certain selector should match an element, but nothing happens, or a box is a different size than you expected. This article will give you guidance on how to go about debugging a CSS problem, and show you how the DevTools can help you find out what's going on.

## The DOM versus view source ##
Something that can trip up newcomers to DevTools is the difference between what you see when you view the source of a webpage, or look at the HTML file you put on the server, and what you can see in the HTML pane of the DevTools. While it looks roughly similar to what you can see via View Source there are som differences.

In the rendered DOM the browser may have corrected some badly-written HTML for you. If you incorrectly closed an element, for instance opening an <h2> but closing with an </h3>, the browser will figure out what you were meaning to do and HTML in the DOM will correctly close the oepn <h2> with an </h2>. The browser will also normalize all of the HTML, and the DOM will also show any changes made by JavaScript.

View Source in comparison, is simply the HTML source code as stored on the server. The HTML tree in your DevTools shows exactly what the browser is rendering at any given time, so it gives you an insight into what is really going on.

## Inspecting the applied CSS ##
A useful ability when inspecting elements with DevTools is the ability to exapnd out shorthand properties. If you click on the little arrow to exapnd the view, it'll show you the different longhand properties and their values.

You can also toggle values in the Rules view on and off, when that panel is active - if you hold your mouse over it checkboxes will appear. Uncheck a rule's checkbox and the CSS will stop applying.

You can also use this to do an A/B comparison, deciding if something looks better with a rule applied or not, and also to help debug it - for example if a layout is going wrong and you are trying to work out which property is causing the problem.

## Adding a new property ##
You can click the closing curly brace in the rule to start entering a new declaration into it, at which point you can start typing the new property and DevTools will show you an autocomplete list of matching properties. After selecting something like `font-size, enter the value you want to try. You can also click the + button to add an additional rule with the same selector, and add your new rules there.

## Understanding the box model ##
IN previous lessons we have discussed the box model, and the fact that we have an alternate box model that changes how the size of elements are calculated based on the size you give them, plus the padding and borders. DevTools can really help you to understand how the size of an element is being calculated.

The Layout view shows you a diagram of the box model on the selected element, along with a description of the properties and values that change how the element is laid out. This includes a description of properties that you may not have explicitly used on the element, but which do have initial values set.

In this panel, one of the detailed properties is the `box-sizing` property, which controls what box model the element uses.

Remember, `content-box` takes the width you give and adds the `padding` and `border`, while `border-box` takes the width you give as the total. So the true width is subtracted from the `padding` and `border-box`.

## Solving specificity issues ##
Sometimes durring development, but in particular when you need to edit the CSS on an existing site, you will find yourself having a hard time getting some CSS to apply. No matter what you do, the element just doesn't seem to take the CSS. What is generally happening here is that a more specific selector is overriding your changes, and here DevTools will really help you out.

When you inspect an element with DevTools it will show you which properties apply by showing less specific ones as being crossed out.

## Debugging problems in CSS ##
What steps should you take when tring to solve a problem in CSS using the DevTools?

1. Take a step back from the problem

Any coding problem can be frustrating, especially CSS problems because you often don't get an error message to search for online to help with finding a solution. If you are becoming frustrated, take a step away from the issue for a while - go for a walk, grab a drink, chat to a co-worker. Sometimes the solution magically appears when you stop thinking about the problem, and even if not, working on it when feeling refreshed will be much easier.

2. Do you have valid HTML and CSS?

Browsers expect your CSS and HTML to be correctly written, however browsers are also very forgiving and will try their best to display your webpages even if you have errors in the markup or stylesheet. If you have mistakes in your code the browsers needs to make a guess at what you meant, and it might make a different decision to what you had in mind. In addition, two different browsers might cope with the problem two different ways. A good first step therefore is to run you HTML and CSS through a validator, to pick up and fix any errors.

3. Is the property and value supported by the browser you are testing with?

Browsers simply ignore CSS they don't understand. DevTools will generally highlight unsupported properties and values in some way. In the screenshot below the browser does not support the subgrid value `grid-template-columns` and so it's showing it crossed-out and with a little yellow ! mark.

4. Is something else overriding your CSS?

This is where the information you have learned about specificity will come in very useful. If you have something more specific overriding what you are trying to do, you can enter into a very frustrating game of trying to work out what. However, as described above, DevTools will show you what CSS is applying and you can work out how to make the new selector specific enough to override it.

5. Make a reduced test case of the problem

If the issue isn't solved by the steps above, then you will need to do some more investigating. The best thing to do at this point is to create something known as a reduced test case. being able to "reduce an issue" is a really useful skill. It will help you find problems in your own code and that of your colleagues, and will also enable you to report bugs and ask for help more effectively.

A reduced test case is a code example that demonstrates the problem in the simplest possible way, with unrelated surrounding content and styling removed. This will often mean taking the problematic code out of your layout to make a small example which only shows that code or feature.

To create a reduced test case:

  1. If your markup is dynamically generated - for example via a CMS - make a satic version of the output that shows the problem. Using something like Codepen.io is useful for this. You can start by doing view source on the page and copying the HTML into Codepen, then grab any relevant CSS and JavaScript and include it too.

  2. If removing the JavaScript does not make the issue go away, don't include the JavaScript.

  3. Remove any HTML that does not contribute to the issue. Remove components or even main elements of the layout. Again, try to get down to the smallest amount of code that still shows the issue.

  4. Remove any CSS that doesn't impact the issue.

  5. Include comments!

A reduced test case gives you something to ask for help with, by posting to a forum, or showing a co-worker. You are much more likely to get help if you can show that you have done the work of reducing the problem and identifying exactly where it happens, before asking for help.