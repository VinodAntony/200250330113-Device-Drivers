#include<linux/module.h>
#include<linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("vinod");

dev_t deviceNumber; 


static int __init driver_init(void){
	
	int ret;
	deviceNumber = MKDEV(42,0);
	ret = register_chrdev_region(deviceNumber,1,"sample_device");
	if(ret){// IF TRUE, THEN DEVICE NUMBER UNAVAILABLE
		printk(KERN_ALERT"unsuccessful device registration, kernel : PERMISSION DENIED");
		return ret;  
	}

	printk(KERN_ALERT"hello\n");
	return 0;
}

static void __exit driver_exit(void){

	printk(KERN_ALERT"bye bye\n");
}

module_init(driver_init);
module_exit(driver_exit);