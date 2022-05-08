/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIMediaApiHandler_H
#define OAI_OAIMediaApiHandler_H

#include <QObject>

#include "OAIError.h"
#include "OAIMediaUpload.h"
#include "OAIMediaUploadDetails.h"
#include "OAIMediaUploadRequest.h"
#include "OAIObject.h"
#include "OAIPaginated.h"
#include <QString>

namespace OpenAPI {

class OAIMediaApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIMediaApiHandler();
    virtual ~OAIMediaApiHandler();


public slots:
    virtual void media_create(OAIMediaUploadRequest oai_media_upload_request);
    virtual void media_get(QString media_id);
    virtual void media_list(QString bookmark, qint32 page_size);
    

};

}

#endif // OAI_OAIMediaApiHandler_H