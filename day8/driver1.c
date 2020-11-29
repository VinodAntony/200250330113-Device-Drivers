#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("vinod");

static int __init driver_init(void){
	
	printk(KERN_ALERT"hello\n");
	return 0;
}

static void __exit driver_exit(void){

	printk(KERN_ALERT"bye bye\n");
}

module_init(driver_init);
module_exit(driver_exit);