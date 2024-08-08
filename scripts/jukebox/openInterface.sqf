// Open the custom interface
[] spawn {
    waitUntil {!(isNull (findDisplay 46))};
    createDialog "CustomInterface";
};