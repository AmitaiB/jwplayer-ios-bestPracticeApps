# JW Player iOS Best Practice Apps

This repository contains samples relating to the JW Player SDK for iOS.

The following projects can be found within this repository:

- [JWBestPracticeApps](#jwbestpracticeapps)
- [JWPlayer-VR-Developer-Demo](#jwplayer-vr-developer-demo)

## JWBestPracticeApps

The JWBestPracticeApps XCode project is composed of several targets which can be run as separate iOS applications.
Each target adds a level of complexity to the base target, JWBestPracticeApps, which creates a basic JW Player with minimal customization. In each target, classes inherit from classes of more basic targets, allowing us to present relevant code in a clear way and spare you the redundancy.

### Targets

- **JWAirPlay:** adds AirPlay functionality (shocker!).

- **JWCasting:** 'casts from JW Player to a Google ChromeCast receiver.

- **JWRemoteController:** an Apple Watch app capable of controlling the JW Player in its companion iOS App, "JWRemotePlayer".

- **JWRemoteCastController:** an Apple Watch app capable of casting the video playing in its companion iOS App, "JWRemoteCastPlayer", to a Google ChromeCast receiver.

- **JWFairPlayDrm:** illustrates how to use our DRM implementation to play a FairPlay encrypted stream.

- **Voicer:** voice control over the player's playback and casting using Siri.

## Initial Setup for JWBestPracticeApps:

#### Via CocoaPods

Both the JW Player iOS SDK, as well as the Google Cast SDK required for JWCasting, can be installed using CocoaPods, which has already been set up in the project. Simply:

1. If you don't have CocoaPods, now's the time to rectify that oversight, with:

    ```bash
    $ gem install cocoapods
    ```

2. In the project directory, run:

    ```bash
    $ pod install
    ```
3. Close the project, and make sure to open it again from the `JWBestPracticeApps.xcworkspace` (*not** xcodeproj).

4. Remember to add your JWPlayer license key to the `info.plist` in the JWBestPracticeApps target. See our [developer guide docs](https://developer.jwplayer.com/sdk/ios/docs/developer-guide/intro/getting-started/) for more detailed instructions.

#### Via Manual Framework installation

For this as well, see the [Getting Started Guide](https://developer.jwplayer.com/sdk/ios/docs/developer-guide/intro/getting-started/) on our developer's page for detailed instructions.

For targets that cast, and require Google's ChromeCast SDK, follow [Google's setup instructions](https://developers.google.com/cast/docs/ios_sender_setup). 

**Important!** To make sure you use a supported version of the ChromeCast Framework, check the [JWPlayer SDK requirements](https://developer.jwplayer.com/sdk/ios/docs/developer-guide/intro/requirements/).

## JWPlayer-VR-Developer-Demo

The JWPlayer-VR-Developer-Demo project showcases how the JW Player VR SDK can be used to allow 360 video playback within your apps.

For setup instructions see the JWPlayer-VR-Developer-Demo [README](./JWPlayer-VR-Developer-Demo/README.md).

## **Feedback**:
Was this repository helpful? How can we improve it? How's my driving? 
<p>Please send your feedback to <support+sdk@jwplayer.com>.
