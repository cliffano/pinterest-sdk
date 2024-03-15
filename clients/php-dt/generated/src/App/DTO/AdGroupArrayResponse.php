<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

class AdGroupArrayResponse
{
    /**
     * @DTA\Data(field="items", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection6::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection6::class})
     */
    public ?\App\DTO\Collection6 $items = null;

}
