#ifndef ERRTYPE_H
#define ERRTYPE_H

#define OK 					1u
#define NOK 				2u
#define NULL_PTR_ERR		3u

/**
 * @name Some Generic Macros.
 * @{
 */
#define ENABLE_macro        1u           /**< @brief Enable value */
#define DISABLE_macro       0u           /**< @brief Disable value */
#define SET                 1u     /**< @brief Set value */
#define RESET               0u    /**< @brief Reset value */
#define GPIO_PIN_SET        SET         /**< @brief Set value for GPIO PIN */
#define GPIO_PIN_RESET      RESET       /**< @brief Reset value for GPIO PIN */
#define FLAG_SET            SET         /**< @brief Set value for a flag */
#define FLAG_RESET          RESET       /**< @brief Reset value for a flag */
/** @} */
#endif 
