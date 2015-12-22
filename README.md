# CCurl

A Swift wrapper around [libcurl][1] that works with Linux

## Dependencies

For Linux you need:

`sudo apt-get install libcurl4-openssl-dev`


# Build the library

At the moment, you need to build the static library yourself:

```
make
sudo make install
```


## Usage

This component is set up to be used with the [Swift Package Manager][2].

Add this line to your `dependencies` section:

```swift
.Package(url: "https://github.com/SwiftOnTheServer/CCurl.git", majorVersion: 1)
```

If you do not have a `Package.swift`, then this will work:

```swift
import PackageDescription

let package = Package(
    dependencies: [
        .Package(url: "https://github.com/SwiftOnTheServer/CCurl.git", majorVersion: 1)
    ]
)
```


[1]: http://curl.haxx.se/libcurl/
[2]: https://swift.org/package-manager/
