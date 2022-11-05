#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x741facb8, "kobject_put" },
	{ 0x7e216075, "cdev_alloc" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4b31b655, "kobject_set_name" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x73cc20f8, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb341ba23, "device_del" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x753af3ce, "device_add" },
	{ 0x4a3a74d6, "kobject_add" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xd394de53, "cdev_add" },
	{ 0x6587c97e, "module_put" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xadc9aed4, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x13696b51, "remap_pfn_range" },
	{ 0xc0346142, "device_initialize" },
	{ 0x9cab3025, "kobject_init" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "576830B64A716C772B1C8BF");
