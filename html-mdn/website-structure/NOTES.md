# Website Structure #

## HTML layout elements in more detail ##
<main> is for content unique to that page. Use it only once per page, and put it directly inside the <body> tag.
Ideally, this shouldn't be nested within other elements.

<article> encloses a block of related content that makes sense on its own without the rest of the page (e.g. a single blog post)

<section> is similar to <article>, but it's more for grouping together a single part of the page that constitues one single piece of functionality
(e.g. a mini map, or a set of article headlines and summaries). It's considered best practice to begin each section with a <h>; also note
that you can break <article>s up into different <sections> or <sections> up into different <articles>

<aside> contains content that is not directly related to the main content but can provide additional information indirectly related to it
(glossary entries, author biography, related links, sidebar, etc.).

<header> represents a group of introductory content. If it is a child of <body> it defines the global header of a webpage, but if it's a child of <articlle>
or <section> it defines a specific headerr for that section (try not to confuse this with titles and headings).

<nav> contains the main navigation functionality for the page. Secondary links, etc, would not go in the navigation

<footer> represents a group of end content for page

### Non-semantic wrappers ###
Sometimes you'll want to group a set of elements together to affect them all as a single entity without giving them any semantic meaning.
For cases like that, HTML provides the <div> and <span> elements. You should use these preferably with a suitable class attribute, to provide some kind of label
for them so they can be easily targeted.

<span> is an inline non-semantic element, which you should only use if you cannot think of a better semantic text element to wrap your content, r don't want to add any specific meaning.
For example:
<p>The King walked drunkenly back to his room at 01:00, the beer doing nothing to aid
him as he staggered through the door <span class="editor-note">[Editor's note: At this point in the
play, the lights should be down low]</span>.</p>

<div> is a block level non-semantic element, which you should only use if you can't think of a better semantic block element to use, or don't want to add any specific meaning. 

For example, imagine a shopping cart widget that you could choose to pull up at any point during your time on an e-commerce site: 
<div class="shopping-cart">
  <h2>Shopping cart</h2>
  <ul>
    <li>
      <p><a href=""><strong>Silver earrings</strong></a>: $99.95.</p>
      <img src="../products/3333-0985/thumb.png" alt="Silver earrings">
    </li>
    <li>
      ...
    </li>
  </ul>
  <p>Total cost: $237.89</p>
</div>

### Line Breaks and horizontal rules ###
<br> creates a line break in a paragraph; it's the only way to force a rigid structure in a situation where you want a series of fixed short lines, such as in a postal address or a poem

For example:
<p>There once was a man named O'Dell<br>
Who loved to write HTML<br>
But his structure was bad, his semantics were sad<br>
and his markup didn't read very well.</p>

<hr> (horizontal rule) elements create a horizontal rule in the document that denotes a thematic change in the text (such as a change in topic or scene). Visually it just looks like a horizontal line.

Information architecture, as applied to web design and development, is the practice of organizing the information / content / functionality of a web site so that it presents the best user experience it can, with information and services being easily usable and findable.