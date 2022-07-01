<?php
/**
 * GenderFilter
 *
 * PHP version 7.1.3
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
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the GenderFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class GenderFilter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("GENDER")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $gENDER;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->gENDER = isset($data['gENDER']) ? $data['gENDER'] : null;
    }

    /**
     * Gets gENDER.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getGENDER(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->gENDER;
    }

    /**
     * Sets gENDER.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $gENDER
     *
     * @return $this
     */
    public function setGENDER(CatalogsProductGroupMultipleStringCriteria $gENDER)
    {
        $this->gENDER = $gENDER;

        return $this;
    }
}


