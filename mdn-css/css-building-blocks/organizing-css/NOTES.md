# Organizing CSS #
As you start to work on larger stylesheets and big projects you'll discover that maintaining a huge CSS file can be challenging. In this article, we'll take a look at some best practices for writing your CSS to make it easily maintainable.

## Tips to keep your CSS tidy ##

--- DOES YOUR PROJECT HAVE A CODING STYLE GUIDE? ---
If you're working on an existing project, the first thing to check it swhether the project has an existing style guide for CSS. Consistency is important.

--- KEEP IT CONSISTENT ---
If you get to set the rules for the project or you're working alone, then the most important thing to do is keep things consistent. Consistency can be applied in all sorts fo ways, such as the same naming conventions for classes, choosing one method of describing color, or mainting consistent formatting.

Having a set of rules you always follow reduces the amount of mental overhead needed when writing CSS, as some of the decision are already made for you.

--- FORMATTING READABLE CSS ---
Some devs prefer to put all of the rules onto one single line while others prefer to break it up.

.box { background-color: #567895; }
h2 { background-color: black; color: white; }

.box {
  background-color: #567895;
}

h2 {
  background-color: black;
  color: white;
}

--- COMMENT YOUR CSS ---
Adding comments to your CSS will help any future developer working with your CSS file, but will also help you when you come back to the project after a break.

A good tip is to add a block of comments between logical sections in your stylesheet too, to help locate different sections quickly when scanning through, or even give you something to search for to jump right into that part of CSS. If you use a string which won't appear in the code you can jump from section to section by searching for it - below we have used ||

/* || General styles */

...

/* || Typography */

...

/* || Header and Main Navigation */

...

What you should comment are the things where you made a particular decision for a particular reason. Perhaps you followed a tutorial to achieve something, and the CSS is a little non-obvious. In that case you could add the URL of the tutorial to the comments. You will thank yourself when you come back to this project in a year or so, and can vaguely remember there was a great tutorial about that thing, but where is it?

--- CREATE LOGICAL SECTIONS IN YOUR STYLESHEET ---
It's a good idea to have all of the common styling first in the stylesheet. For example, you'll typically have rules set up for: 
  * body
  * p
  * h1, h2, h3, h4, h5
  * ul and ol
  * The table properties
  * Links

In this first section of the stylesheet we are providing default styling for the type on the site, setting up a default style for data tables and lists and paragraphs, etc.

After this section we could define a few utility classes, for example a class that removes the default list style for lists we're going to display as flex items or in some other way. If you have a few things you know you will want to apply to lots of different elements, they can come in this section.

/* || UTILITIES */

.nobullets {
  list-style: none;
  margin: 0;
  padding: 0;
}

Then we can add everything that is used sitewide. That might be things like basic page layout, the header, navigation styling, and so on.
/* || SITEWIDE */

.main-nav { ... }

.logo { ... }

Finally, we'll include CSS for specific things, broken down by the context, page or even component in which they are used.

/* || STORE PAGES */

.product-listing { ... }

.product-box { ... }

By ordering things in this way, we at least have an idea in which part of the stylesheet we will be looking fo rsomething that we want to change.

--- AVOID OVERLY-SPECIFIC SELECTORS ---
If you create very specific selectors you will often find that you need to duplicate chunks of your CSS to apply the same rules to another element. For example, you might have something like the below selector, which applies the rule to a <p> with a class `box` inside an <article> with a class of `main`

article.main p.box {
  border: 1px solid #ccc;
}

If you then wanted to apply the same rules to something outside of `main`, or to something other than a <p>, you would have to add another selector to these rules or create a whole new ruleset. Instead, you could create a class called `box` and apply that anywhere.

.box {
  border: 1px solid #ccc;
}

There are times when making something more specific makes sense, however this will generally e an exception rather than usual practice.

--- BREAK LARGE STYLESHEETS INTO MULTIPLE SMALLER ONES ---
In particular cases where you have very different styles for distinct parts of the site, you might want to have a stylesheet that includes all the global rules and then smaller ones that include the specific rules needed for those sections. You can link to multiple stylesheets from one page, and the normal rules of the cascade apply, with rules in stylesheets linked later comoing after the rules in stylesheets linked earlier.

For example, we might have an online store as part of the site, with a lot of CSS used only for styling the product listing and forms needed for the store. It would make sense to have those things in different stylesheets, only linked to on store pages.

This can make it easier to keep your CSS organized, and also means that if multiple people are working on the CSS you will have fewer situations where two people need to work on the same stylesheet at once, leading to conflicts in source control.

### Other tools that can help ###