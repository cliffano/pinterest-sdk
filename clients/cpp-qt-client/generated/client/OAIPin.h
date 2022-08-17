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
 * OAIPin.h
 *
 * Pin
 */

#ifndef OAIPin_H
#define OAIPin_H

#include <QJsonObject>

#include "OAIBoard_owner.h"
#include "OAIPin_media.h"
#include "OAIPin_media_source.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBoard_owner;
class OAIPin_media;
class OAIPin_media_source;

class OAIPin : public OAIObject {
public:
    OAIPin();
    OAIPin(QString json);
    ~OAIPin() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QString getLink() const;
    void setLink(const QString &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDominantColor() const;
    void setDominantColor(const QString &dominant_color);
    bool is_dominant_color_Set() const;
    bool is_dominant_color_Valid() const;

    QString getAltText() const;
    void setAltText(const QString &alt_text);
    bool is_alt_text_Set() const;
    bool is_alt_text_Valid() const;

    QString getBoardId() const;
    void setBoardId(const QString &board_id);
    bool is_board_id_Set() const;
    bool is_board_id_Valid() const;

    QString getBoardSectionId() const;
    void setBoardSectionId(const QString &board_section_id);
    bool is_board_section_id_Set() const;
    bool is_board_section_id_Valid() const;

    OAIBoard_owner getBoardOwner() const;
    void setBoardOwner(const OAIBoard_owner &board_owner);
    bool is_board_owner_Set() const;
    bool is_board_owner_Valid() const;

    OAIPin_media getMedia() const;
    void setMedia(const OAIPin_media &media);
    bool is_media_Set() const;
    bool is_media_Valid() const;

    OAIPin_media_source getMediaSource() const;
    void setMediaSource(const OAIPin_media_source &media_source);
    bool is_media_source_Set() const;
    bool is_media_source_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QString link;
    bool m_link_isSet;
    bool m_link_isValid;

    QString title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString dominant_color;
    bool m_dominant_color_isSet;
    bool m_dominant_color_isValid;

    QString alt_text;
    bool m_alt_text_isSet;
    bool m_alt_text_isValid;

    QString board_id;
    bool m_board_id_isSet;
    bool m_board_id_isValid;

    QString board_section_id;
    bool m_board_section_id_isSet;
    bool m_board_section_id_isValid;

    OAIBoard_owner board_owner;
    bool m_board_owner_isSet;
    bool m_board_owner_isValid;

    OAIPin_media media;
    bool m_media_isSet;
    bool m_media_isValid;

    OAIPin_media_source media_source;
    bool m_media_source_isSet;
    bool m_media_source_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPin)

#endif // OAIPin_H
