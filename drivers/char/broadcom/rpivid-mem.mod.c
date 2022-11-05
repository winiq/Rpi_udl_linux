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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe38b0aff, "device_create" },
	{ 0xbad97937, "__class_create" },
	{ 0xd394de53, "cdev_add" },
	{ 0x3c81c627, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x13696b51, "remap_pfn_range" },
	{ 0xe7a640cf, "phys_mem_access_prot" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x2bce416, "device_destroy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intc");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intcC*");

MODULE_INFO(srcversion, "172E55C090236D5E5327EC4");
