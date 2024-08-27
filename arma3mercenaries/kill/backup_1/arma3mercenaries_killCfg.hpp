/*
arma3mercenaries_killCfg.hpp

by BrianV1981
*/

class CfgSettings {
    class CBA {
        class arma3mercenaries {

            // Killfeed Display Duration
            class killFeedDuration {
                title = "Killfeed Display Duration";
                description = "Adjust the duration (in seconds) the killfeed notification remains on screen.";
                typeName = "NUMBER";
                value = 5; // Default value
                values[] = {1, 20}; // Min: 1 second, Max: 20 seconds
            };

            // Friendly Fire Penalty (Bank)
            class friendlyFirePenalty {
                title = "Friendly Fire Penalty (Bank)";
                description = "Sets the amount of credits deducted from the player's bank account for friendly fire incidents.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Friendly Fire Compensation (Bank)
            class friendlyFireCompensation {
                title = "Friendly Fire Compensation (Bank)";
                description = "Sets the amount of credits awarded to a player when killed by friendly fire. Credits are added to the player's bank account.";
                typeName = "NUMBER";
                value = 20000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // OPFOR Kill Reward (Random, Wallet)
            class opforKillReward {
                title = "OPFOR Kill Reward (Random, Wallet)";
                description = "Sets the maximum random amount of credits awarded for killing an OPFOR unit. Credits are added to the player's wallet.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // OPFOR AI Wallet Amount (Random, Wallet)
            class opforAiWallet {
                title = "OPFOR AI Wallet Amount (Random, Wallet)";
                description = "Sets the maximum random amount of credits found on a killed OPFOR AI unit. Credits are added to the AI unit's wallet.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // NATO Kill Reward (Random, Wallet)
            class natoKillReward {
                title = "NATO Kill Reward (Random, Wallet)";
                description = "Sets the maximum random amount of credits awarded for killing a NATO unit. Credits are added to the player's wallet.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // NATO AI Wallet Amount (Random, Wallet)
            class natoAiWallet {
                title = "NATO AI Wallet Amount (Random, Wallet)";
                description = "Sets the maximum random amount of credits found on a killed NATO AI unit. Credits are added to the AI unit's wallet.";
                typeName = "NUMBER";
                value = 1000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Independent Kill Reward (Random, Wallet)
            class independentKillReward {
                title = "Independent Kill Reward (Random, Wallet)";
                description = "Sets the maximum random amount of credits awarded for killing an Independent unit. Credits are added to the player's wallet.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Independent AI Wallet Amount (Random, Wallet)
            class independentAiWallet {
                title = "Independent AI Wallet Amount (Random, Wallet)";
                description = "Sets the maximum random amount of credits found on a killed Independent AI unit. Credits are added to the AI unit's wallet.";
                typeName = "NUMBER";
                value = 1000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // NATO Penalty for Killing Independent (Bank)
            class natoPenaltyIndependent {
                title = "NATO Penalty for Killing Independent (Bank)";
                description = "Sets the amount of credits deducted from a NATO player's bank account for killing an Independent unit.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Civilian Kill Penalty (Bank)
            class civilianKillPenalty {
                title = "Civilian Kill Penalty (Bank)";
                description = "Sets the amount of credits deducted from a player's bank account for killing a civilian.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Civilian AI Wallet Amount (Random, Wallet)
            class civilianAiWallet {
                title = "Civilian AI Wallet Amount (Random, Wallet)";
                description = "Sets the maximum random amount of credits found on a killed Civilian AI unit. Credits are added to the AI unit's wallet.";
                typeName = "NUMBER";
                value = 1000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Death Penalty Amount (Bank)
            class deathPenalty {
                title = "Death Penalty Amount (Bank)";
                description = "Sets the amount of credits deducted from the player's bank account when they die.";
                typeName = "NUMBER";
                value = 10000; // Default value
                values[] = {0, 100000}; // Min: 0 credits, Max: 100000 credits
            };

            // Marker Size
            class markerSize {
                title = "Death Marker Size";
                description = "Sets the size of the death markers on the map.";
                typeName = "NUMBER";
                value = 0.5; // Default value
                values[] = {0.1, 2}; // Min: 0.1, Max: 2
            };

            // Kill Notification Sound Toggle
            class killNotificationSound {
                title = "Enable Kill Notification Sound";
                description = "Toggles the sound notification that plays when a kill is registered.";
                typeName = "BOOL";
                value = 1; // Default value: 1 (enabled)
            };

            // Silent Hints Toggle
            class silentHints {
                title = "Enable Silent Hints";
                description = "Toggles the display of silent hints related to kill rewards and penalties.";
                typeName = "BOOL";
                value = 1; // Default value: 1 (enabled)
            };

            // Killfeed Enabled Toggle
            class killFeedEnabled {
                title = "Enable Killfeed";
                description = "Toggles the display of the killfeed notification.";
                typeName = "BOOL";
                value = 1; // Default value: 1 (enabled)
            };
        };
    };
};
