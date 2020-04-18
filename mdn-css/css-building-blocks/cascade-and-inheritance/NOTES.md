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