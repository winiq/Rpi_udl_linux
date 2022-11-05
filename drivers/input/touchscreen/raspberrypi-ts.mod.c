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
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x8b74d0eb, "input_set_poll_interval" },
	{ 0xaba6152e, "input_setup_polling" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xfdf39630, "rpi_firmware_get" },
	{ 0x550203cb, "of_get_parent" },
	{ 0xe959743c, "dma_free_attrs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "169624CB5B3290748D4826E");
