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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x422aa03a, "drm_property_create_range" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0x7e6170c4, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x53dd0af1, "drm_object_attach_property" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xc15e0557, "drm_mode_create_tv_properties" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ecc31ad, "drm_crtc_helper_set_mode" },
	{ 0x923e6188, "drm_i2c_encoder_destroy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xe10b02ec, "drm_property_destroy" },
	{ 0x95069563, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "7327E9C928051FC771AFFB0");
