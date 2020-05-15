# Styling Lists #
Lists behave like any other text for the most part, but there are some CSS properties specific to lists that you need to know about, and some best practices to consider. This article explains it all.

## A simple list example ##
Throughout this article, we'll look at unordered, ordered, and description lists - all have features that are similar, and some that are particular to their type of list.

## Handling list spacing ##
When styling lists, you need to adjust their styles so they keep the same vertical spacing as their surrounding elements (such as paragraph and images; sometimes called vertical rhythm), and the same horizontal spacing as each other.

Checkout the CSS file for text styles and spacing

## List-specific styles ##
There are three properties you should know about to start with, which can be set on <ul> or <ol> elements: 

* `list-style-type`: Sets the type of bullets to use for the list, for example, square or circle bullets for an unordered list, or numbers, letters, or roman numerals for an ordered list.

* `list-style-position`: Sets whether the bullets appear inside the list items, or outside them before the start of each item.

* `list-style-image`: Allows you to use a custom image for the bullet, rather than a simple square or circle

--- BULLET STYLES ---
As mentioned, the `list-style-type` property allows you to set what type of bullet to use for the bullet points. In our example, we've set the ordered list to use uppercase roman numerals.

--- BULLET POSITION ---
The `list-style-position` property sets whether the bullets appear inside the list items, or outside them before the start of each item. The default value is `outside` the list items. 

This refers to inside and outside the <li> border

--- USING A CUSTOM BULLET IMAGE ---
The `list-style-image` property allows you to use a custom image for your bullet. The syntax is pretty simple: 

ul {
  list-style-image: url(star.png);
}

However, this property is a bit limited in terms of controlling the position, size, etc. of bullets. You are better off using the `background` family of properties, which you've learnred in the Backgrounds and Borders article.

--- LIST STYLE SHORTHAND ---
The three properties mentioned above can all be set using a single shorthand propert, `list-style`. For example:

ul {
  list-style-type: square;
  list-style-image: url(example.png);
  list-style-position: inside;
  
}

Could be replaced with: 

ul {
  list-style: square url(example.png) inside;
}

The values can be listed in any order, and you can use one, two, or all three. If both a `type` and an `image` are specified, the type is used as a fallback if the image can't be laoded for some reason.