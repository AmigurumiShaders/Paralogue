Paralogue is a simple dialogue plugin developed in Unreal Engine 5.4, designed specifically to help achieve to the narrative goals of our game, Channel Getaway. 
This tool is still in early/experimental development, and thus many of the core features are not yet implemented. They are also subject to change as we learn more about our needs and Unreal Engine itself.
That being said, the current core feature goals include:
- **Simplified persistent variable management** - Use persistent route flags within both blueprints and the dialogue editor, to allow characters to "remember" and react to past player actions at any time during the play session
- **Flexible and out-of-the-way** - If you find that this tool doesn't accommodate your needs out-of-the box, it should allow you to build what you do need through the existing Unreal systems - no need to "break" anything

### Installation instructions
Current build can be found in the Paralogue.zip file in the root of this repository.

Within the root folder of your project, create a folder called "Plugins" (if not already there)
![Pasted image 20250602173926](https://github.com/user-attachments/assets/0a68dae2-2c02-43dc-a519-38f8a1d7a7e3)

Unzip Paralogue.zip and add it under its own folder within Plugins
To open demo world: Navigate to Paralogue>Content>PrototypeDemo and open DemoWorld
Before running the world, the settings for the world must be changed to be FirstPersonGameMode with the ParalogueDemo first person controller blueprint (as shown here): ![Pasted image 20250602174536](https://github.com/user-attachments/assets/0dd34654-dea8-4a8a-9ee5-b419995a970d)
