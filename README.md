# **Twilight Remnants**

An Action RPG project developed in **Unreal Engine 5** with a primary focus on **C++ programming**. The game is a third-person set in an open world partition map.

📺 **[Watch the Project Gameplay Preview on YouTube](https://youtu.be/w8A6ZXGDJrg?si=qUizxSvH4BqqEX4w)**

---

## 🛠️ **Implemented Core Technologies**

* **Programming:** C++ in Unreal Engine 
* **Engine Architecture & Communication:** Basic Types, Game Mods, Unreal Interfaces, Delegates, and Core Physics/Collision system Overlaps
* **Locomotion & Animation:** Animation Blueprint, BlendSpaces, Root Motion Animations, Motion Warping
* **World Building & Environment:** Unreal Engine 5's Open World Partition system, Epic Games Fab Environment Assets, Unreal Water Plugin, and Packed Level Instances
* **Audio:** MetaSounds System
* **Visual Effects:** Niagara Particle Effects
* **User Interface:** UMG UI (Widget Components & User Widgets)

---

## 🚀 **Key Features & Implementation Details**

### **1. Combat & Animation Mechanics**
* **Melee Combat:** Developed combat functionality centering around swords and other melee weapons.
* **Motion Warping:** Utilized Unreal Engine 5's Motion Warping system for customized root motion animations during combat sequences.
* **Unreal Interfaces:** Implemented Interfaces to handle weapon and combat mechanics cleanly.

### **2. Character & Enemy Systems**
* **Player Character:** Developed a third-person player character featuring health bars, player stats, and specific attributes.
* **Enemy Types:** Programmed 8 distinct types of enemies, ranging from humanoid types wielding weapons to monsters and creatures that attack the player.
* **Enemy Behavior & Combat:** Built out complete systems covering enemy movement animations, patrol targets, pawn sensing, enemy states, dynamic combat mechanics, and directional hit reaction montages.

### **3. Economy, Interaction, & UI Pipelines**
* **Resource Collection:** Implemented an active collection loop where the player gathers coins and souls.
* **Soul Harvesting:** Enemies dynamically drop souls upon death, which the player can then pick up.
* **Delegates & UI Binding:** Leveraged C++ delegates to tie attributes and systems directly to custom health bars and user interfaces built via User Widgets.
* **Breakables:** Programmed interactive, destructible environment elements like pots that break upon weapon impact.

### **4. Level Design, Environmental Systems, & Optimization**
* **Open World Map:** Created a 16x16 landscape environment leveraging Unreal Engine 5's Open World partition functionality.
* **Fab Asset Integration:** Designed level scenes utilizing realistic environmental assets sourced from the Fab marketplace.
* **Water Plugin Ecosystem:** Integrated Unreal Engine's native Water Plugin to implement an interactive small lake within the map landscape.
* **Packed Level Instances:** Imported entirely structured dungeon levels directly into the open world map using Packed Level Instances to optimize modular scene assembly.
* **MetaSounds Audio:** Created audio loops, weapon swing sounds, breakable impacts, and footstep sound effects natively inside the MetaSounds system.
* **Niagara Particles:** Configured particle systems covering weapon trails and blood splatters upon hit registration.

---

## 🧠 **Engineering Best Practices Applied**

* Use of data structures and algorithms optimized for game environments.
* Implementation of native design patterns utilized directly within Unreal Engine.
* Adherence to best practices for game coding in Unreal Engine 5 with C++.
