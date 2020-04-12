# How to Structure a Web Form #
The flexibility of forms makes them one of the most complex structures in HTML; you can build any kind of basic form using dedicated elements and attributes. 

Using correct strucuture when building an HTML form will help ensure that the form is both usable and accessible

## The Form Element ## 
The <form> element formally defines a form and attributes that determine the form's behavior. Each time you want to create an HTML form, you must start it by uisng this element, nesting all the contents inside. 

Many assistive technologies and browser plugins can discover <form> elements and implement special hooks to make them easier to use. 

!WARNING: It's strictly forbidden to nest a form inside another form as it causes forms to behave in an unpreditable manner. 

## The <fieldset> and <legend> elements ##
The <fieldset> element is a convenient way to create groups of widgets that share the same purpose, for styling and semantic purposes.

You can label a <fieldset> by including a <legend> element just below the opening <fieldset> tag. The content of that <legend> element formally describes the purpose of the <fieldset> it is included inside. 

Because of its influence over assistive technology, the <fieldset> element is one of the key elements for building accessible forms; however it's important not to abuse it. If possible, each time you build a form, try to listen to how a screen reader interprets it. If it sounds odd, try to improve the form structure. 