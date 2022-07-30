#define pr_fmt(fmt) "%s:%s(): " fmt, KBUILD_MODNAME, __func__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_AUTHOR("Do Tai");
MODULE_DESCRIPTION("Better Makefile for Linux Kernel");
MODULE_VERSION("1.0");
MODULE_LICENSE("NON LICENSE");

static int __init lkm_template_init(void)
{
    pr_info("Inserted\n");
    return 0;
}

static void __exit lkm_template_exit(void)
{
    pr_info("Removed\n");
}

module_init(lkm_template_init);
module_exit(lkm_template_exit);