/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPinCreate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinCreate::OAIPinCreate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinCreate::OAIPinCreate() {
    this->initializeModel();
}

OAIPinCreate::~OAIPinCreate() {}

void OAIPinCreate::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_link_isSet = false;
    m_link_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_dominant_color_isSet = false;
    m_dominant_color_isValid = false;

    m_alt_text_isSet = false;
    m_alt_text_isValid = false;

    m_board_id_isSet = false;
    m_board_id_isValid = false;

    m_board_section_id_isSet = false;
    m_board_section_id_isValid = false;

    m_board_owner_isSet = false;
    m_board_owner_isValid = false;

    m_media_isSet = false;
    m_media_isValid = false;

    m_media_source_isSet = false;
    m_media_source_isValid = false;

    m_parent_pin_id_isSet = false;
    m_parent_pin_id_isValid = false;

    m_note_isSet = false;
    m_note_isValid = false;
}

void OAIPinCreate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinCreate::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_link_isValid = ::OpenAPI::fromJsonValue(m_link, json[QString("link")]);
    m_link_isSet = !json[QString("link")].isNull() && m_link_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_dominant_color_isValid = ::OpenAPI::fromJsonValue(m_dominant_color, json[QString("dominant_color")]);
    m_dominant_color_isSet = !json[QString("dominant_color")].isNull() && m_dominant_color_isValid;

    m_alt_text_isValid = ::OpenAPI::fromJsonValue(m_alt_text, json[QString("alt_text")]);
    m_alt_text_isSet = !json[QString("alt_text")].isNull() && m_alt_text_isValid;

    m_board_id_isValid = ::OpenAPI::fromJsonValue(m_board_id, json[QString("board_id")]);
    m_board_id_isSet = !json[QString("board_id")].isNull() && m_board_id_isValid;

    m_board_section_id_isValid = ::OpenAPI::fromJsonValue(m_board_section_id, json[QString("board_section_id")]);
    m_board_section_id_isSet = !json[QString("board_section_id")].isNull() && m_board_section_id_isValid;

    m_board_owner_isValid = ::OpenAPI::fromJsonValue(m_board_owner, json[QString("board_owner")]);
    m_board_owner_isSet = !json[QString("board_owner")].isNull() && m_board_owner_isValid;

    m_media_isValid = ::OpenAPI::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

    m_media_source_isValid = ::OpenAPI::fromJsonValue(m_media_source, json[QString("media_source")]);
    m_media_source_isSet = !json[QString("media_source")].isNull() && m_media_source_isValid;

    m_parent_pin_id_isValid = ::OpenAPI::fromJsonValue(m_parent_pin_id, json[QString("parent_pin_id")]);
    m_parent_pin_id_isSet = !json[QString("parent_pin_id")].isNull() && m_parent_pin_id_isValid;

    m_note_isValid = ::OpenAPI::fromJsonValue(m_note, json[QString("note")]);
    m_note_isSet = !json[QString("note")].isNull() && m_note_isValid;
}

QString OAIPinCreate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinCreate::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(m_created_at));
    }
    if (m_link_isSet) {
        obj.insert(QString("link"), ::OpenAPI::toJsonValue(m_link));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(m_title));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_dominant_color_isSet) {
        obj.insert(QString("dominant_color"), ::OpenAPI::toJsonValue(m_dominant_color));
    }
    if (m_alt_text_isSet) {
        obj.insert(QString("alt_text"), ::OpenAPI::toJsonValue(m_alt_text));
    }
    if (m_board_id_isSet) {
        obj.insert(QString("board_id"), ::OpenAPI::toJsonValue(m_board_id));
    }
    if (m_board_section_id_isSet) {
        obj.insert(QString("board_section_id"), ::OpenAPI::toJsonValue(m_board_section_id));
    }
    if (m_board_owner.isSet()) {
        obj.insert(QString("board_owner"), ::OpenAPI::toJsonValue(m_board_owner));
    }
    if (m_media.isSet()) {
        obj.insert(QString("media"), ::OpenAPI::toJsonValue(m_media));
    }
    if (m_media_source.isSet()) {
        obj.insert(QString("media_source"), ::OpenAPI::toJsonValue(m_media_source));
    }
    if (m_parent_pin_id_isSet) {
        obj.insert(QString("parent_pin_id"), ::OpenAPI::toJsonValue(m_parent_pin_id));
    }
    if (m_note_isSet) {
        obj.insert(QString("note"), ::OpenAPI::toJsonValue(m_note));
    }
    return obj;
}

QString OAIPinCreate::getId() const {
    return m_id;
}
void OAIPinCreate::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPinCreate::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPinCreate::is_id_Valid() const{
    return m_id_isValid;
}

QDateTime OAIPinCreate::getCreatedAt() const {
    return m_created_at;
}
void OAIPinCreate::setCreatedAt(const QDateTime &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAIPinCreate::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIPinCreate::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QString OAIPinCreate::getLink() const {
    return m_link;
}
void OAIPinCreate::setLink(const QString &link) {
    m_link = link;
    m_link_isSet = true;
}

bool OAIPinCreate::is_link_Set() const{
    return m_link_isSet;
}

bool OAIPinCreate::is_link_Valid() const{
    return m_link_isValid;
}

QString OAIPinCreate::getTitle() const {
    return m_title;
}
void OAIPinCreate::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIPinCreate::is_title_Set() const{
    return m_title_isSet;
}

bool OAIPinCreate::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIPinCreate::getDescription() const {
    return m_description;
}
void OAIPinCreate::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIPinCreate::is_description_Set() const{
    return m_description_isSet;
}

bool OAIPinCreate::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIPinCreate::getDominantColor() const {
    return m_dominant_color;
}
void OAIPinCreate::setDominantColor(const QString &dominant_color) {
    m_dominant_color = dominant_color;
    m_dominant_color_isSet = true;
}

bool OAIPinCreate::is_dominant_color_Set() const{
    return m_dominant_color_isSet;
}

bool OAIPinCreate::is_dominant_color_Valid() const{
    return m_dominant_color_isValid;
}

QString OAIPinCreate::getAltText() const {
    return m_alt_text;
}
void OAIPinCreate::setAltText(const QString &alt_text) {
    m_alt_text = alt_text;
    m_alt_text_isSet = true;
}

bool OAIPinCreate::is_alt_text_Set() const{
    return m_alt_text_isSet;
}

bool OAIPinCreate::is_alt_text_Valid() const{
    return m_alt_text_isValid;
}

QString OAIPinCreate::getBoardId() const {
    return m_board_id;
}
void OAIPinCreate::setBoardId(const QString &board_id) {
    m_board_id = board_id;
    m_board_id_isSet = true;
}

bool OAIPinCreate::is_board_id_Set() const{
    return m_board_id_isSet;
}

bool OAIPinCreate::is_board_id_Valid() const{
    return m_board_id_isValid;
}

QString OAIPinCreate::getBoardSectionId() const {
    return m_board_section_id;
}
void OAIPinCreate::setBoardSectionId(const QString &board_section_id) {
    m_board_section_id = board_section_id;
    m_board_section_id_isSet = true;
}

bool OAIPinCreate::is_board_section_id_Set() const{
    return m_board_section_id_isSet;
}

bool OAIPinCreate::is_board_section_id_Valid() const{
    return m_board_section_id_isValid;
}

OAIBoard_owner OAIPinCreate::getBoardOwner() const {
    return m_board_owner;
}
void OAIPinCreate::setBoardOwner(const OAIBoard_owner &board_owner) {
    m_board_owner = board_owner;
    m_board_owner_isSet = true;
}

bool OAIPinCreate::is_board_owner_Set() const{
    return m_board_owner_isSet;
}

bool OAIPinCreate::is_board_owner_Valid() const{
    return m_board_owner_isValid;
}

OAISummaryPin_media OAIPinCreate::getMedia() const {
    return m_media;
}
void OAIPinCreate::setMedia(const OAISummaryPin_media &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAIPinCreate::is_media_Set() const{
    return m_media_isSet;
}

bool OAIPinCreate::is_media_Valid() const{
    return m_media_isValid;
}

OAIPinMediaSource OAIPinCreate::getMediaSource() const {
    return m_media_source;
}
void OAIPinCreate::setMediaSource(const OAIPinMediaSource &media_source) {
    m_media_source = media_source;
    m_media_source_isSet = true;
}

bool OAIPinCreate::is_media_source_Set() const{
    return m_media_source_isSet;
}

bool OAIPinCreate::is_media_source_Valid() const{
    return m_media_source_isValid;
}

QString OAIPinCreate::getParentPinId() const {
    return m_parent_pin_id;
}
void OAIPinCreate::setParentPinId(const QString &parent_pin_id) {
    m_parent_pin_id = parent_pin_id;
    m_parent_pin_id_isSet = true;
}

bool OAIPinCreate::is_parent_pin_id_Set() const{
    return m_parent_pin_id_isSet;
}

bool OAIPinCreate::is_parent_pin_id_Valid() const{
    return m_parent_pin_id_isValid;
}

QString OAIPinCreate::getNote() const {
    return m_note;
}
void OAIPinCreate::setNote(const QString &note) {
    m_note = note;
    m_note_isSet = true;
}

bool OAIPinCreate::is_note_Set() const{
    return m_note_isSet;
}

bool OAIPinCreate::is_note_Valid() const{
    return m_note_isValid;
}

bool OAIPinCreate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dominant_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_alt_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_section_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_owner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_source.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_note_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinCreate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI