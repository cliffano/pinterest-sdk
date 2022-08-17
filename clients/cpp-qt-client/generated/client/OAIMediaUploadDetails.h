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

/*
 * OAIMediaUploadDetails.h
 *
 * Media upload details
 */

#ifndef OAIMediaUploadDetails_H
#define OAIMediaUploadDetails_H

#include <QJsonObject>

#include "OAIMediaUploadStatus.h"
#include "OAIMediaUploadType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMediaUploadDetails : public OAIObject {
public:
    OAIMediaUploadDetails();
    OAIMediaUploadDetails(QString json);
    ~OAIMediaUploadDetails() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMediaId() const;
    void setMediaId(const QString &media_id);
    bool is_media_id_Set() const;
    bool is_media_id_Valid() const;

    OAIMediaUploadType getMediaType() const;
    void setMediaType(const OAIMediaUploadType &media_type);
    bool is_media_type_Set() const;
    bool is_media_type_Valid() const;

    OAIMediaUploadStatus getStatus() const;
    void setStatus(const OAIMediaUploadStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString media_id;
    bool m_media_id_isSet;
    bool m_media_id_isValid;

    OAIMediaUploadType media_type;
    bool m_media_type_isSet;
    bool m_media_type_isValid;

    OAIMediaUploadStatus status;
    bool m_status_isSet;
    bool m_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMediaUploadDetails)

#endif // OAIMediaUploadDetails_H
