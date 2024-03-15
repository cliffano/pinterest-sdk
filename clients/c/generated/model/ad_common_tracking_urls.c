#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ad_common_tracking_urls.h"



ad_common_tracking_urls_t *ad_common_tracking_urls_create(
    list_t *impression,
    list_t *click,
    list_t *engagement,
    list_t *buyable_button,
    list_t *audience_verification
    ) {
    ad_common_tracking_urls_t *ad_common_tracking_urls_local_var = malloc(sizeof(ad_common_tracking_urls_t));
    if (!ad_common_tracking_urls_local_var) {
        return NULL;
    }
    ad_common_tracking_urls_local_var->impression = impression;
    ad_common_tracking_urls_local_var->click = click;
    ad_common_tracking_urls_local_var->engagement = engagement;
    ad_common_tracking_urls_local_var->buyable_button = buyable_button;
    ad_common_tracking_urls_local_var->audience_verification = audience_verification;

    return ad_common_tracking_urls_local_var;
}


void ad_common_tracking_urls_free(ad_common_tracking_urls_t *ad_common_tracking_urls) {
    if(NULL == ad_common_tracking_urls){
        return ;
    }
    listEntry_t *listEntry;
    if (ad_common_tracking_urls->impression) {
        list_ForEach(listEntry, ad_common_tracking_urls->impression) {
            free(listEntry->data);
        }
        list_freeList(ad_common_tracking_urls->impression);
        ad_common_tracking_urls->impression = NULL;
    }
    if (ad_common_tracking_urls->click) {
        list_ForEach(listEntry, ad_common_tracking_urls->click) {
            free(listEntry->data);
        }
        list_freeList(ad_common_tracking_urls->click);
        ad_common_tracking_urls->click = NULL;
    }
    if (ad_common_tracking_urls->engagement) {
        list_ForEach(listEntry, ad_common_tracking_urls->engagement) {
            free(listEntry->data);
        }
        list_freeList(ad_common_tracking_urls->engagement);
        ad_common_tracking_urls->engagement = NULL;
    }
    if (ad_common_tracking_urls->buyable_button) {
        list_ForEach(listEntry, ad_common_tracking_urls->buyable_button) {
            free(listEntry->data);
        }
        list_freeList(ad_common_tracking_urls->buyable_button);
        ad_common_tracking_urls->buyable_button = NULL;
    }
    if (ad_common_tracking_urls->audience_verification) {
        list_ForEach(listEntry, ad_common_tracking_urls->audience_verification) {
            free(listEntry->data);
        }
        list_freeList(ad_common_tracking_urls->audience_verification);
        ad_common_tracking_urls->audience_verification = NULL;
    }
    free(ad_common_tracking_urls);
}

cJSON *ad_common_tracking_urls_convertToJSON(ad_common_tracking_urls_t *ad_common_tracking_urls) {
    cJSON *item = cJSON_CreateObject();

    // ad_common_tracking_urls->impression
    if(ad_common_tracking_urls->impression) {
    cJSON *impression = cJSON_AddArrayToObject(item, "impression");
    if(impression == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *impressionListEntry;
    list_ForEach(impressionListEntry, ad_common_tracking_urls->impression) {
    if(cJSON_AddStringToObject(impression, "", (char*)impressionListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ad_common_tracking_urls->click
    if(ad_common_tracking_urls->click) {
    cJSON *click = cJSON_AddArrayToObject(item, "click");
    if(click == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *clickListEntry;
    list_ForEach(clickListEntry, ad_common_tracking_urls->click) {
    if(cJSON_AddStringToObject(click, "", (char*)clickListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ad_common_tracking_urls->engagement
    if(ad_common_tracking_urls->engagement) {
    cJSON *engagement = cJSON_AddArrayToObject(item, "engagement");
    if(engagement == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *engagementListEntry;
    list_ForEach(engagementListEntry, ad_common_tracking_urls->engagement) {
    if(cJSON_AddStringToObject(engagement, "", (char*)engagementListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ad_common_tracking_urls->buyable_button
    if(ad_common_tracking_urls->buyable_button) {
    cJSON *buyable_button = cJSON_AddArrayToObject(item, "buyable_button");
    if(buyable_button == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *buyable_buttonListEntry;
    list_ForEach(buyable_buttonListEntry, ad_common_tracking_urls->buyable_button) {
    if(cJSON_AddStringToObject(buyable_button, "", (char*)buyable_buttonListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ad_common_tracking_urls->audience_verification
    if(ad_common_tracking_urls->audience_verification) {
    cJSON *audience_verification = cJSON_AddArrayToObject(item, "audience_verification");
    if(audience_verification == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *audience_verificationListEntry;
    list_ForEach(audience_verificationListEntry, ad_common_tracking_urls->audience_verification) {
    if(cJSON_AddStringToObject(audience_verification, "", (char*)audience_verificationListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ad_common_tracking_urls_t *ad_common_tracking_urls_parseFromJSON(cJSON *ad_common_tracking_urlsJSON){

    ad_common_tracking_urls_t *ad_common_tracking_urls_local_var = NULL;

    // define the local list for ad_common_tracking_urls->impression
    list_t *impressionList = NULL;

    // define the local list for ad_common_tracking_urls->click
    list_t *clickList = NULL;

    // define the local list for ad_common_tracking_urls->engagement
    list_t *engagementList = NULL;

    // define the local list for ad_common_tracking_urls->buyable_button
    list_t *buyable_buttonList = NULL;

    // define the local list for ad_common_tracking_urls->audience_verification
    list_t *audience_verificationList = NULL;

    // ad_common_tracking_urls->impression
    cJSON *impression = cJSON_GetObjectItemCaseSensitive(ad_common_tracking_urlsJSON, "impression");
    if (impression) { 
    cJSON *impression_local = NULL;
    if(!cJSON_IsArray(impression)) {
        goto end;//primitive container
    }
    impressionList = list_createList();

    cJSON_ArrayForEach(impression_local, impression)
    {
        if(!cJSON_IsString(impression_local))
        {
            goto end;
        }
        list_addElement(impressionList , strdup(impression_local->valuestring));
    }
    }

    // ad_common_tracking_urls->click
    cJSON *click = cJSON_GetObjectItemCaseSensitive(ad_common_tracking_urlsJSON, "click");
    if (click) { 
    cJSON *click_local = NULL;
    if(!cJSON_IsArray(click)) {
        goto end;//primitive container
    }
    clickList = list_createList();

    cJSON_ArrayForEach(click_local, click)
    {
        if(!cJSON_IsString(click_local))
        {
            goto end;
        }
        list_addElement(clickList , strdup(click_local->valuestring));
    }
    }

    // ad_common_tracking_urls->engagement
    cJSON *engagement = cJSON_GetObjectItemCaseSensitive(ad_common_tracking_urlsJSON, "engagement");
    if (engagement) { 
    cJSON *engagement_local = NULL;
    if(!cJSON_IsArray(engagement)) {
        goto end;//primitive container
    }
    engagementList = list_createList();

    cJSON_ArrayForEach(engagement_local, engagement)
    {
        if(!cJSON_IsString(engagement_local))
        {
            goto end;
        }
        list_addElement(engagementList , strdup(engagement_local->valuestring));
    }
    }

    // ad_common_tracking_urls->buyable_button
    cJSON *buyable_button = cJSON_GetObjectItemCaseSensitive(ad_common_tracking_urlsJSON, "buyable_button");
    if (buyable_button) { 
    cJSON *buyable_button_local = NULL;
    if(!cJSON_IsArray(buyable_button)) {
        goto end;//primitive container
    }
    buyable_buttonList = list_createList();

    cJSON_ArrayForEach(buyable_button_local, buyable_button)
    {
        if(!cJSON_IsString(buyable_button_local))
        {
            goto end;
        }
        list_addElement(buyable_buttonList , strdup(buyable_button_local->valuestring));
    }
    }

    // ad_common_tracking_urls->audience_verification
    cJSON *audience_verification = cJSON_GetObjectItemCaseSensitive(ad_common_tracking_urlsJSON, "audience_verification");
    if (audience_verification) { 
    cJSON *audience_verification_local = NULL;
    if(!cJSON_IsArray(audience_verification)) {
        goto end;//primitive container
    }
    audience_verificationList = list_createList();

    cJSON_ArrayForEach(audience_verification_local, audience_verification)
    {
        if(!cJSON_IsString(audience_verification_local))
        {
            goto end;
        }
        list_addElement(audience_verificationList , strdup(audience_verification_local->valuestring));
    }
    }


    ad_common_tracking_urls_local_var = ad_common_tracking_urls_create (
        impression ? impressionList : NULL,
        click ? clickList : NULL,
        engagement ? engagementList : NULL,
        buyable_button ? buyable_buttonList : NULL,
        audience_verification ? audience_verificationList : NULL
        );

    return ad_common_tracking_urls_local_var;
end:
    if (impressionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, impressionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(impressionList);
        impressionList = NULL;
    }
    if (clickList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, clickList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(clickList);
        clickList = NULL;
    }
    if (engagementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, engagementList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(engagementList);
        engagementList = NULL;
    }
    if (buyable_buttonList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, buyable_buttonList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(buyable_buttonList);
        buyable_buttonList = NULL;
    }
    if (audience_verificationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, audience_verificationList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(audience_verificationList);
        audience_verificationList = NULL;
    }
    return NULL;

}
