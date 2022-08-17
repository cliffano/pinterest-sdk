/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIAdGroupsApiHandler_H
#define OAI_OAIAdGroupsApiHandler_H

#include <QObject>

#include "OAIAdGroupArrayResponse.h"
#include "OAIAdGroupCreateRequest.h"
#include "OAIAdGroupResponse.h"
#include "OAIAdGroupUpdateRequest.h"
#include "OAIAd_groups_list_200_response.h"
#include "OAIBidFloor.h"
#include "OAIBidFloorRequest.h"
#include "OAIError.h"
#include <QList>
#include <QString>

namespace OpenAPI {

class OAIAdGroupsApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIAdGroupsApiHandler();
    virtual ~OAIAdGroupsApiHandler();


public slots:
    virtual void adGroupsBidFloor_get(QString ad_account_id, OAIBidFloorRequest oai_bid_floor_request);
    virtual void adGroups_create(QString ad_account_id, QList<OAIAdGroupCreateRequest> oaiad_group_create_request);
    virtual void adGroups_get(QString ad_account_id, QString ad_group_id);
    virtual void adGroups_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> ad_group_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark, bool translate_interests_to_names);
    virtual void adGroups_update(QString ad_account_id, QList<OAIAdGroupUpdateRequest> oaiad_group_update_request);
    

};

}

#endif // OAI_OAIAdGroupsApiHandler_H