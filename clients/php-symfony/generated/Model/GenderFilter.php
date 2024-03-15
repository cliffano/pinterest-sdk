<?php
/**
 * GenderFilter
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
 * Class representing the GenderFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class GenderFilter 
{
        /**
     * @var CatalogsProductGroupMultipleGenderCriteria|null
     * @SerializedName("GENDER")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleGenderCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleGenderCriteria")
     */
    protected ?CatalogsProductGroupMultipleGenderCriteria $gENDER = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->gENDER = array_key_exists('gENDER', $data) ? $data['gENDER'] : $this->gENDER;
        }
    }

    /**
     * Gets gENDER.
     *
     * @return CatalogsProductGroupMultipleGenderCriteria|null
     */
    public function getGENDER(): ?CatalogsProductGroupMultipleGenderCriteria
    {
        return $this->gENDER;
    }



    /**
     * Sets gENDER.
     *
     * @param CatalogsProductGroupMultipleGenderCriteria|null $gENDER
     *
     * @return $this
     */
    public function setGENDER(?CatalogsProductGroupMultipleGenderCriteria $gENDER): self
    {
        $this->gENDER = $gENDER;

        return $this;
    }
}


