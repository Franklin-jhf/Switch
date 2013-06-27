Switch, Window-Based Context Switching
======================================

Switch is a window-based (as opposed to application-based) context switcher. By default it is bound to using `⌥⇥` and `⌥⇧⇥` to cycle through the visible windows on the current space, and `⌥W` can be used to close windows while the interface is active. It looks like this:

![Interface Screenshot](http://numist.net/random/switch.png)

This project is functional, but not finished. I'm using it every day, but I could use your help.

Contributions in the form of [beers](mailto:numist@numist.net?cc=pay@square.com&subject=Here%27s%20%245&body=For%20a%20Switch%20beer%21%0A%0A%28If%20you%20don%27t%20have%20Square%20Cash%20yet%2C%20send%20this%20message%20anyway%20and%20I%20can%20invite%20you.%20If%20you%20haven%27t%20heard%20of%20it%2C%20check%20out%20https%3A%2F%2Fsquare.com%2Fcash%2F%20%29), [patches](https://github.com/numist/Switch/pull/new), and [issues](https://github.com/numist/Switch/issues) are appreciated.

Getting Started
---------------

To check out the project, its submodules, and open in Xcode:

    git clone https://github.com/numist/Switch.git
    cd Switch/
    git submodule sync
    git submodule update --init --recursive
    open Switch.xcodeproj

At this point, `⌘R` should have you up and running!

If you do not have an account with Admin privileges, or have not enabled the Accessibility API, you will find yourself at a relevant breakpoint in the source.

**NOTE:** Switch requires Mac OS X version 10.8 or newer and is developed with Xcode 4.6 and newer. The application does not do any work to check these constraints so incompatibility may be indistinguishable from bugs.