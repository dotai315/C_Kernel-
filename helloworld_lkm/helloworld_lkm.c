#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_AUTHOR("Do Tai");
MODULE_DESCRIPTION("helloworld_lkm: hello, world, our first LKM");
MODULE_LICENSE("NONLICENSE)";
MODULE_VERSION("1.0");

static int __init helloworld_lkm_init(void)
{
	printk(KERN_INFO "Hello, world\n");
	return 0;		/* success */
}

static void __exit helloworld_lkm_exit(void)
{
	printk(KERN_INFO "Goodbye, world\n");
}

module_init(helloworld_lkm_init);
module_exit(helloworld_lkm_exit);