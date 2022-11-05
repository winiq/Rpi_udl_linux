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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x97fd9c7c, "i2c_match_id" },
	{ 0xb55ffa6f, "devm_device_add_group" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6257a2f, "complete" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xdfb45682, "input_mt_sync_frame" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84C*");
MODULE_ALIAS("i2c:exc3000");
MODULE_ALIAS("i2c:exc80h60");
MODULE_ALIAS("i2c:exc80h84");

MODULE_INFO(srcversion, "6D415A646E017A54B3F704B");
