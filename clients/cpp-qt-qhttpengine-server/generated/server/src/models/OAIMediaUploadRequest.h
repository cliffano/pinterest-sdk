/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIMediaUploadRequest.h
 *
 * Media upload request
 */

#ifndef OAIMediaUploadRequest_H
#define OAIMediaUploadRequest_H

#include <QJsonObject>

#include "OAIMediaUploadType.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMediaUploadRequest : public OAIObject {
public:
    OAIMediaUploadRequest();
    OAIMediaUploadRequest(QString json);
    ~OAIMediaUploadRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIMediaUploadType getMediaType() const;
    void setMediaType(const OAIMediaUploadType &media_type);
    bool is_media_type_Set() const;
    bool is_media_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIMediaUploadType media_type;
    bool m_media_type_isSet;
    bool m_media_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMediaUploadRequest)

#endif // OAIMediaUploadRequest_H
