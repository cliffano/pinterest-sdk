package org.openapitools.server.model


/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 *
 * @param xAmzDate  for example: ''null''
 * @param xAmzSignature  for example: ''null''
 * @param xAmzSecurityToken  for example: ''null''
 * @param xAmzAlgorithm  for example: ''null''
 * @param key  for example: ''null''
 * @param policy  for example: ''null''
 * @param xAmzCredential  for example: ''null''
 * @param contentType  for example: ''multipart/form-data''
*/
final case class MediaUploadAllOfUploadParameters (
  xAmzDate: Option[String] = None,
  xAmzSignature: Option[String] = None,
  xAmzSecurityToken: Option[String] = None,
  xAmzAlgorithm: Option[String] = None,
  key: Option[String] = None,
  policy: Option[String] = None,
  xAmzCredential: Option[String] = None,
  contentType: Option[String] = None
)

