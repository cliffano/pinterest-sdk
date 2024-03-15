<?php
/**
 * UserWebsiteVerificationCode
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the UserWebsiteVerificationCode model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class UserWebsiteVerificationCode 
{
        /**
     * Code to check against the user claiming the website
     *
     * @var string|null
     * @SerializedName("verification_code")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $verificationCode = null;

    /**
     * DNS TXT record to check against for the website to be claimed
     *
     * @var string|null
     * @SerializedName("dns_txt_record")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $dnsTxtRecord = null;

    /**
     * Metatag the verification process searchs for the website to be claimed
     *
     * @var string|null
     * @SerializedName("metatag")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $metatag = null;

    /**
     * File expected to find on the website being claimed
     *
     * @var string|null
     * @SerializedName("filename")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $filename = null;

    /**
     * A full html file to upload to the website in order for it to be claimed
     *
     * @var string|null
     * @SerializedName("file_content")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $fileContent = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->verificationCode = array_key_exists('verificationCode', $data) ? $data['verificationCode'] : $this->verificationCode;
            $this->dnsTxtRecord = array_key_exists('dnsTxtRecord', $data) ? $data['dnsTxtRecord'] : $this->dnsTxtRecord;
            $this->metatag = array_key_exists('metatag', $data) ? $data['metatag'] : $this->metatag;
            $this->filename = array_key_exists('filename', $data) ? $data['filename'] : $this->filename;
            $this->fileContent = array_key_exists('fileContent', $data) ? $data['fileContent'] : $this->fileContent;
        }
    }

    /**
     * Gets verificationCode.
     *
     * @return string|null
     */
    public function getVerificationCode(): ?string
    {
        return $this->verificationCode;
    }



    /**
     * Sets verificationCode.
     *
     * @param string|null $verificationCode  Code to check against the user claiming the website
     *
     * @return $this
     */
    public function setVerificationCode(?string $verificationCode = null): self
    {
        $this->verificationCode = $verificationCode;

        return $this;
    }

    /**
     * Gets dnsTxtRecord.
     *
     * @return string|null
     */
    public function getDnsTxtRecord(): ?string
    {
        return $this->dnsTxtRecord;
    }



    /**
     * Sets dnsTxtRecord.
     *
     * @param string|null $dnsTxtRecord  DNS TXT record to check against for the website to be claimed
     *
     * @return $this
     */
    public function setDnsTxtRecord(?string $dnsTxtRecord = null): self
    {
        $this->dnsTxtRecord = $dnsTxtRecord;

        return $this;
    }

    /**
     * Gets metatag.
     *
     * @return string|null
     */
    public function getMetatag(): ?string
    {
        return $this->metatag;
    }



    /**
     * Sets metatag.
     *
     * @param string|null $metatag  Metatag the verification process searchs for the website to be claimed
     *
     * @return $this
     */
    public function setMetatag(?string $metatag = null): self
    {
        $this->metatag = $metatag;

        return $this;
    }

    /**
     * Gets filename.
     *
     * @return string|null
     */
    public function getFilename(): ?string
    {
        return $this->filename;
    }



    /**
     * Sets filename.
     *
     * @param string|null $filename  File expected to find on the website being claimed
     *
     * @return $this
     */
    public function setFilename(?string $filename = null): self
    {
        $this->filename = $filename;

        return $this;
    }

    /**
     * Gets fileContent.
     *
     * @return string|null
     */
    public function getFileContent(): ?string
    {
        return $this->fileContent;
    }



    /**
     * Sets fileContent.
     *
     * @param string|null $fileContent  A full html file to upload to the website in order for it to be claimed
     *
     * @return $this
     */
    public function setFileContent(?string $fileContent = null): self
    {
        $this->fileContent = $fileContent;

        return $this;
    }
}


