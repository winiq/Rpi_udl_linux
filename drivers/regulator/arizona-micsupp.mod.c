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
	{ 0xa8fff377, "regulator_get_bypass_regmap" },
	{ 0x2c56bb09, "regulator_is_enabled_regmap" },
	{ 0x691e55ba, "regulator_get_voltage_sel_regmap" },
	{ 0xad535d33, "regulator_set_voltage_sel_regmap" },
	{ 0xa88615a, "regulator_map_voltage_linear_range" },
	{ 0x43093003, "regulator_list_voltage_linear_range" },
	{ 0xf208f25a, "platform_unregister_drivers" },
	{ 0x24b015ea, "__platform_register_drivers" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xe584169d, "of_get_regulator_init_data" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x975d6188, "devm_regulator_register" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4ee7f783, "snd_soc_component_force_enable_pin" },
	{ 0xdb02c9fb, "snd_soc_dapm_sync" },
	{ 0x7809c8fa, "snd_soc_component_disable_pin" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x1158a918, "regulator_enable_regmap" },
	{ 0x4d2d925e, "regulator_disable_regmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d1f1977, "regulator_set_bypass_regmap" },
	{ 0x530a9a59, "rdev_get_drvdata" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "01ABA19F50E943028A046A3");
