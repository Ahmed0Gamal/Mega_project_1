#ifndef SYSCFG_INTERFACE_H_
#define SYSCFG_INTERFACE_H_



/**
 * @brief
 */
typedef enum
{
	SYSCFG_PORTA ,      /**< GPIO PORTA */
	SYSCFG_PORTB ,      /**< GPIO PORTB */
	SYSCFG_PORTC ,      /**< GPIO PORTC */
	SYSCFG_PORTD ,      /**< GPIO PORTD */
	SYSCFG_PORTE ,      /**< GPIO PORTE */
	SYSCFG_PORTF ,      /**< GPIO PORTF */
	SYSCFG_PORTG ,      /**< GPIO PORTG */
	SYSCFG_PORTH ,      /**< GPIO PORTH */
	SYSCFG_INVALIED_PORT/**< INVALIED_PORT */
}SYSCFG_PORT_E;

/**
 * @brief
 */
typedef enum
{
	SYSCFG_LINE0,      /**< EXTI_LINE0 */
	SYSCFG_LINE1,      /**< EXTI_LINE1 */
	SYSCFG_LINE2,      /**< EXTI_LINE2 */
	SYSCFG_LINE3,      /**< EXTI_LINE3 */
	SYSCFG_LINE4,      /**< EXTI_LINE4 */
	SYSCFG_LINE5,      /**< EXTI_LINE5 */
	SYSCFG_LINE6,      /**< EXTI_LINE6 */
	SYSCFG_LINE7,      /**< EXTI_LINE7 */
	SYSCFG_LINE8,      /**< EXTI_LINE8 */
	SYSCFG_LINE9,      /**< EXTI_LINE9 */
	SYSCFG_LINE10,     /**< EXTI_LINE10 */
	SYSCFG_LINE11,     /**< EXTI_LINE11 */
	SYSCFG_LINE12,     /**< EXTI_LINE12 */
	SYSCFG_LINE13,     /**< EXTI_LINE13 */
	SYSCFG_LINE14,     /**< EXTI_LINE14 */
    SYSCFG_LINE15,  /**< EXTI_LINE15 */
	SYSCFG_UNVALID/**< EXTI_UNVALID_LINE */
}SYSCFG_LINE_E;

/**
 * @brief   SYSCFG_VoidSetEXTIPORT For External Interrupt Configuration Register
 * @pre
 * @post
 * @param 	EXTI_LINE_NUMBER
 * @param 	GPIO_PORT
 * @return  LocalErrorStatue
 */
uint8_t SYSCFG_VoidSetEXTIPORT(SYSCFG_LINE_E SYSCFG_LINE_NUMBER , SYSCFG_PORT_E GPIO_PORT);



#endif
