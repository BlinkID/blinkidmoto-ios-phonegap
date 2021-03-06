package com.phonegap.plugins.blinkid;

import android.app.Activity;
import android.content.Context;

/**
 * Replacement for android resources <b>R</b> in PhoneGap plugins.<br/>
 * Used for resources added with a plugin. Since the application has its own <b>R</b> the plugin must fetch its resources through the activity's context.
 */
public class FakeR {
    private Context context;
    private String packageName;

    public FakeR(Activity activity) {
        context = activity.getApplicationContext();
        packageName = context.getPackageName();
    }

    public FakeR(Context context) {
        this.context = context;
        packageName = context.getPackageName();
    }

    /**
     * Get resource identifier from given group.
     *
     * @param group id, string, layout, dimen, bool, etc.
     * @param key   Resource key
     * @return Resource identifier
     */
    public int getIdFrom(String group, String key) {
        return context.getResources().getIdentifier(key, group, packageName);
    }

    /**
     * Get resource identifier from group <b>id</b>.
     *
     * @param key Resource key
     * @return Resource value
     */
    public int getId(String key) {
        return getIdFrom("id", key);
    }

    /**
     * Get resource identifier from group <b>string</b>.
     *
     * @param key Resource key
     * @return Resource value
     */
    public String getString(String key) {
        return context.getResources().getString(getIdFrom("string", key));
    }
}
