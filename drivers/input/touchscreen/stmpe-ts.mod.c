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
	{ 0x40061ad3, "input_register_device" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x60c6eed3, "stmpe_reg_write" },
	{ 0x656f8592, "stmpe811_adc_common_init" },
	{ 0x96e8e444, "stmpe_enable" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x63e3a1b4, "platform_get_irq_byname" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52e17a4, "stmpe_reg_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x12cb343a, "stmpe_block_read" },
	{ 0xcb784504, "stmpe_set_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbd5a619f, "stmpe_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "52A6D78295BEA306BB2E4AF");
