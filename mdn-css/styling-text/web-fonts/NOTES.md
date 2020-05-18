# Web Fonts #
In this article we will go further, exploring web fonts in detail - these allow you to download custom fonts along with your web page, to allow for more varied, custom text styling.

## Font families recap ##
Fonts applied to your HTML can be controlled using the `font-family` property. This takes one or more font family names, and the browser travels down the list until it finds a font it has available on the system it is running.

p {
  font-family: Helvetica, "Trebuchet MS", Verdana, sans-serif;
}

This system works well, but traditionally web developers' font choices were limited. There are ony a handful of fonts that you can guaranteee to be available across all common systems - the so-called Web-safe fonts.

You can use the font stack to specify preferable fonts, followed by web-safe alternatives, followed by the default system font, but this adds overhead in terms of testing to make sure that you designs look ok with each font, etc.

## Web fonts ##
There's an alternative that works very well, right back to IE version 6. Web fonts are a CSS feature that allows you uto specify font files to be downloaded along with your websites as it is accessed, meaning that any browser that supports web fonts can have exactly the fonts you specify available to it. Amazing! The syntx required looks something like this: 

First of all, you'll have a  `@font-face` block at the start of the CSS, which specifies the font files to download.

@font-face {
  font-family: "myFont";
  src: url("myFont.woff");
}

Below this you can then use the font family name specified inside `@font-face` to apply your custom font to anything you like, as norma:

html {
  font-family: "myFont", "Bitstream Vera Serif", serif;
}

The syntax does get a bit more complex than this; we'll go into more detail below. 

There are two important things to bear in mind about web fonts:

  1. Browsers support different font formats, so you'll need multiple font formats for decent cross-browser support. For example, most modern browsers support WOFF/WOFF2 (Web Open Font Format versions 1 & 2), the most efficient format around, but older versions of IE only support EOT (Embedded Open Type) fonts, and you might need to include an SVG version of the font to support older versions of iPhone and Android browsers. We'll show you below how to generate the required code.
  2. Fonts generally aren't free to use. You have to pay for them, and/or follow other license conditions such as crediting the font creator in the code (or on your site). You shouldn't steal fonts and use them without giving proper credit.

## Active learning: A web font example ##

--- FINDING FONTS ---
For this example, we'll use two web fonts, one for the headings, and one for the body text. To start with, we need to find the font files that contain the fonts. fonts are created by font foundries and are stored in different file formats. There are generally three types of sites where you can obtain fonts: 
  * A free font distributor: This is a site that makes free fonts available for download (font squirrel, dafont, and everything fonts).
  * A paid font distributor: This is a site that makes font available for a charge, such as fonts.com or myfonts.com. You can also buy fonts directly from font foundries
  * An online font service: This is a site that stores and serves the fonts for you, making the whole process easier

Download two fonts from FontSquirrel and unzip them. Copy them into your working directory.

--- GENERATING THE REQUIRED CODE ---
  1. Make sure you have satisfied any licensing requirement, if you are going to use this in a commericial and/or Web Project.
  2. Go to the Fontsquirrel Webfont Generator
  3. Upload youru two font files using the *Upload Fonts Button*
  4. Check the checkbox labeled "Yes, the fonts i'm uploading are legally elligible for the web embedding."
  5. Click *download your kit*.

After the generator has finished processing, you should get a ZIP file to download -- save it in the same directory as your HTML and CSS.

--- IMPLEMENTING THE CODE IN YOUR DEMO ---
Inside the unzipped webfontkit directory  you'll see three useful items:
  * Multiple versions of each font: (for example .ttf, .woff, .woff2, etc.). As mentioned above, multiple fonts are needed for cross browser support -
  this is Fontsquirrel's way of making sure you've got evrything you need.
  
  * A demo HTML file for each font - load these in your browser to see what the font will look like in different usage contexts.

  * A stylesheet.css file, which contains the generated `@font-face` code you'll need.

  To implement these fonts in your demo, follow these steps:
    1. Rename the unzipped directory to something easy and simple, like fonts.
    2. Open up the stylesheet.css file and copy both the `@font-face` blocks contained inside into your `web-font-start.css` file - you need to put them at the very top, before any of your CSS, as the fonts need to be imported before you can use them on your site.
    3. Each of the url() functions points to a foint file that we want to import into our CSS - we need to make sure the paths to the files are correct, so add fonts/ to the start of each path (adjust as necessary).
    4. Now you can use these fonts in your font stacks, just like any web safe or default system font.

## Using an online font service ##
Online font services generally store and serve fonts for you, so you don't have to worry about writing the `@font-face` code, and generally just need to insert a simple line or two of code into your site to make everything work.

Most of these services are subscription based (Adobe Fonts, Cloud.typography), with the notable exception of Google Fonts, a useful free service, especially for rapid testing worrk and writing demos.

Most of these services are easy to use, so we won't cover them in great detail.

  1. Go to Google fonts
  2. use the filters on the left-hand side to display the kinds of fonts you want to choose and choose a couple of fonts you like
  3. To select a font family, press the + button alongside it
  4. When you've chosen the font families, press the [Number] *Families Selected* bar at the bottom of the page.
  5. In the resulting screen, you first need to copy the line of HTML code shown and paste it into the head of the HTML file. Put it above the exisiting <link> element, so that the font is imported before you try to use it in your CSS.
  6. Then you need to copy the CSS declarations listed into your CSS as appropriate, to apply the custom fonts to your HTML.

  ## @font-face in more detail ##
  