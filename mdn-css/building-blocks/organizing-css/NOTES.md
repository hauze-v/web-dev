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
CSS itself doesn't have much in the way of built-in organization so it's up to you to create consistency and rules around how you write CSS. The web community has also developed various tools and approaches that can help you manage larger CSS projects. As they may be helpful for you to investigate, and you are likely to come across these things when working with other people, we've included a short guide to some of these below.

--- CSS METHODOLOGIES ---
These methodologies are essentially CSS coding guides that take a very structured approach to writing and organising CSS. Typically they tend to result in more verbose use of CSS than you might have if you wrote and optimised every selector to a custom set of rules for that project.

However, you do gain a lot of structure by adopting one and, as many of these systems are very widly used, other developers are more likely to understand the approach you are using and be able to write their CSS in the same way, rather than having to work out your own personal methodology from scratch.

#### OOCSS ####

Object Oriented CSS. The basic idea of OOCSS is to separate your CSS into reusable objects, which can be used anywhere you need on your site. The standard example of OOCSS is the pattern described as The Media Object. This is a pattern with a fixed size image, video or other element on one side, and flexible content on the other. It's a pattern we see all over websites for comments, listings, and so on.

If you are not taking an OOCSS approach you might create custom CSS for the different places this pattern is used, for example creating a class called `comment` with a bunch of rules for the component parts, then a class called `list-item` with almost the same rules as the `commont` class except for some tiny differences. 

In OOCSS, you would create one pattern called `media` that would have all of the common CSS for both patterns - a base class for things that are generally the shape of the media object. Then we'd add an additional class to deal with those tiny differences, thus extending that styling in specific ways.

#### BEM ####
BEM stands for Block Element Modifier. In BEM a block is a standalone entity such as a button, menu, or logo. An element is something like a list item or a title that is tied to the block it's in. A modifer is a flag on a block or element that changes the styling or behavior. You will be able to recognise code that uses BEM due to the extensive use of dashes and underscores in the CSS classes. For example, look at the classess applied to this HTML from the page about BEM naming conventions:

<form class="form form--theme-xmas form--simple">
  <input class="form__input" type="text" />
  <input
    class="form__submit form__submit--disabled"
    type="submit" />
</form>

The additional classes are similar to those used in the OOCSS example, however they use the strict naming conventions of BEM.

BEM is widely used in larger web projects and many people write their CSS in this way. It is likely that you will come across exxamples, even in tutorials, that use BEM syntax, without mentionoing why the CSS is structured in such a way.

--- BUILD SYSTEMS for CSS ---
Another way to organize your CSS is to take advantage of some of the tooling that is available for front-end developers, which allows you to take a slightly more programmatic approach to writing CSS. There are a number of tools which we refer to as *pre-processors* and *post-processors*. 

A *pre-processor* runs over your raw files and turns them into a stylesheet, whereas a *post-processor* takes your finished stylesheet and does something to it - perhaps to optimize it in order for it to load faster.

Many code editors can do this for you, or you can install command line tools to help.

The most popular pre-processor is Sass. This is not a Sass tutorial, but I'll briefly go over some features of Sass.

#### Defining variables ####
CSS now has native custom properties, making this feature increasingly less important, however one of the reasons you might use Sass is to be able to define all of the colors and fonts used in a project as settings, then use that variable around the project. This means that if you realize you have used the wrong shade of blue, you only need change it in one place.

If we created a variable called `$base-color` as in the first line below, we could then use it through the stylesheeet anywhere that required that color.

$base-color: #c6538c;

.alert {
  border: 1px solid $base-color;
}
