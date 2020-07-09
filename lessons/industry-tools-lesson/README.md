Before we get started with learning about HTML, CSS, and JavaScript, I think it's hugely important to learn some of the industry standard tools.

Learning and adopting these tools early on in your journey will not only help in the long run when you accept a job that's using them, they'll also help you land the job.

More on that later.

Additionally, all of these tools will increase your productivity, make your life easier, and free up more time for learning.

Let's begin.

## Alfred / Wox ##
Alright, we're going to cheat a little bit here and start with my favorite tool that's more a personal preference than an "industry standard." I use Alfred constantly, hundreds of times a day while on my Macbook.

It is strictly a Mac tool, but don't worry there's a slightly less cool, but mostly similar app for Windows called Wox.

Basically, the above snippet from their website is just a fancy bit of text that says this is an awesome productivity app.

But what does that really mean? What can it do?

In short, it allows you to control and execute a lot of different things just by typing in some text, or some keywords.

After you have it installed, open "Alfred Preferences" to declare your Alfred Hotkey.

For me, the easiest and fastest is cmd+space. Save and exit from Alfred to enable that hotkey which should now display a little textbox on your screen.

From here we can simply type into the box to Google things, open other windows, do math, etc.

Here's a full list of what you can do with Alfred:

Google
Open apps (just type the app name)
View your clipboard history
Open files/folders on your machine
Toggle WiFi
Shutdown, restart, sleep,  and empty trash
Prevent Mac from sleeping
Convert colors between hsl, hex, rgb
Shorten a URL
Control Philips hue lights
Tweet directly from Alfred
Calculate numbers

Check out my YouTube video at the top of this article for better look at power of Alfred.

At the time of writing this, I believe Alfred comes pre-installed with Mac OS Catalina 10.15.4, but you can also find and download it here.


There's a free and a paid version, but I've been using the free forever and it's great.

For you Windows users, try downloading Wox.

## VS Code ##
In order to write HTML, CSS, and JavaScript, we're going to need something called an Integrated Development Environment (IDE), or more generally, a text editor.

This is a tool that at it's very basic level, simply allows us to read and write text. For that reason, you could write code in something like Notepad++, and many people do!

Not us though. :]

There are many editors out there like Eclipse, Atom, Sublime, IntelliJ, etc. And it really doesn't matter which one you use, but you will need to pick at least one.

We'll be using the widely popular text editor, Visual Studio Code, or VS Code for short.

The reason?

At the time of writing this, it's the industry standard due to it's refined user experience.

The most powerful feature is IntelliSense, which goes beyond syntax highlighting and autocomplete, providing smart completions based on variable types, function definitions, and imported modules.

It's also a great IDE to learn a language on, because it offers documentation and definitions simply by hovering over a piece of code.

Fun fact about is that it was built using JavaScript and is even open source! Electron JS to be exact.

Here's the link to download VS Code. It's available on Mac, Windows, an Linux!

After you you download and install VS Code, go ahead and open it up because I'd like to show you some of the basic features and navigation.

When you first open up VS Code, you'll see something similar to the image below. It will typically open within this "Welcome" tab which you can see at the top.

Go ahead and close the "Welcome" tab by hitting the little black X to the right of it.

First we'll look at the Explorer tab located at the top left. From here you can open a folder and view the various files in your directory.

As you can see in the image below, I've opened a project titled "industry-tools-lessons" which has three files inside it: app.js, index.html, and styles.css.

From the project explorer, you can double click files to open them on the right, or right click on folders to add new files to your project.

The next tab going down vertically on the left side of VS Code allows you to search your current project.

You likely won't use this feature much when you're first getting started, however once you start working on bigger projects or collaborating, it becomes very handy.

For example, my current work project and code base contains several hundred files, maybe more. Since I recently on boarded to this project, I'm not yet familiar with the code.

When I'm tasked with working on something and need to find a specific file to edit, the search option allows me to search the entire project directory for any matches.

It's very helpful!

If we update our index.html file to contain an h1 element with the words "Hello World." We can then search for those words and the result will tell us what file VS Code found the match in!

The next feature I want to share with you all is the VS Code Extensions tab.

You can think of extensions like plugins. Basically they're additional little apps that you can add to VS Code to extend its functionality.

There are soooo many so browse through them and simply click the green install button on ones you'd like to add.

There's even a recommended section which offers popular extensions used by most developers.

The only one that's necessary for us and our learning moving forward is Live Server, so make sure you install that one.

If you're paralyzed by the number of options, here's a list of my currently installed extensions. Just install these and move on:

Beautify
Docker
File-icons
Gitlens
Live Server
Material Icon Theme
Prettify JSON
Python
Vetur
vscode-icons
DuoTone Dark Themes

One of the fan favorite features of VS Code and one that I use quite often is the built in terminal!

You can open the built-in terminal with either the keyboard shortcut "ctl + ~" or by clicking the Terminal menu option at the top of VS Code.

We'll be learning more about the terminal and command line interfaces in the next section so stay tuned!

Lastly, it might be a good idea to walk through the various VS Code user settings and preferences.

One quick trick to get to anything in VS Code is to use the keyboard shortcut: shift+cmd+p

If you walk away with anything from this article, let it be remembering this VS Code shortcut. It's basically Alfred for VS Code!

It prompts a text field where you can simply type what you're trying to do or what you're looking for.

For example, if you have some extensions installed now (like Beautify) and want to Beautify a file, you can use this shortcut and then type beautify to quickly beautify the text!

In our case we'll use it to pull up the settings (user preferences menu).

From here you can browse the commonly used settings and tweak your VS Code experience to your liking.

A setting I've found useful has been the Auto Save setting which I've set to `afterDelay` and 3000 milliseconds which means three seconds after I stop typing code, my file will automatically save!

You might also want to mess with your Font Size or Tab Size, which can be found in the "Commonly Used" section when you first open the settings.

This is all personal preference obviously, but I've also enjoyed switching my Word Wrap setting to "on" so that I don't have to toggle it every time my code bleeds too far to the right side of my editor.